#include <stdio.h>

int main(void)
{
	int month, day, year;
	const char *months[] = {"January", "February", "March", "April", "May", "June",
							"July", "August", "September", "October", "November", "December"};
	const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Input month, day and year: ");
	if (scanf("%d %d %d", &month, &day, &year) != 3)
		return 1;

	if (month < 1 || month > 12) {
		printf("Invalid month: %d\n", month);
		return 0;
	}

	int leapYear = 0;
	if (year % 400 == 0) {
		leapYear = 1;
	} else if (year % 4 == 0 && year % 100 != 0) {
		leapYear = 1;
	}

	int maximum = daysInMonth[month - 1];
	if (month == 2 && leapYear == 1) {
		maximum = maximum + 1;
	}
	if (day < 1 || day > maximum) {
		printf("Invalid date: %s %d, %d\n", months[month - 1], day, year);
		if (month == 2 && day == 29 && !leapYear)
			printf("%d is not a leap year\n", year);
		return 0;
	}

	printf("Date entered: %s %d, %d\n", months[month - 1], day, year);
	printf("%s has %d days.\n", months[month - 1], maximum);

	const char *zodiac = "Pisces";
	if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
		zodiac = "Aries";
	} else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
		zodiac = "Taurus";
	} else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
		zodiac = "Gemini";
	} else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
		zodiac = "Cancer";
	} else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
		zodiac = "Leo";
	} else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
		zodiac = "Virgo";
	} else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
		zodiac = "Libra";
	} else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
		zodiac = "Scorpio";
	} else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
		zodiac = "Sagittarius";
	} else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
		zodiac = "Capricorn";
	} else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
		zodiac = "Aquarius";
	}
	printf("Zodiac sign: %s\n", zodiac);
	return 0;
}
