#include <stdio.h>

int main(void) {
	int month, day, year;
	int validMonth;
	int leap;
	const char *monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Input month, day and year: ");
	if (scanf("%d %d %d", &month, &day, &year));

	leap = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
	validMonth = month >= 1 && month <= 12;
	if (validMonth && month == 2 && leap) monthDays[1] = 29;
	if (!validMonth) {
		if (day < 1 || day > 31) {
			printf("Invalid month: %d\n", month);
			printf("Invalid day: %d\n", day);
		} else {
			printf("Invalid date: No month %d\n", month);
		}
		return 0;
	}

	int maxDays = monthDays[month - 1];
	if (day < 1 || day > maxDays) {
		printf("Invalid date: %s %d, %d\n", monthNames[month - 1], day, year);
		if (month == 2 && day == 29 && !leap)
			printf("%d is not a leap year\n", year);
		return 0;
	}

	printf("Date entered: %s %d, %d\n", monthNames[month - 1], day, year);
	printf("%s has %d days.\n", monthNames[month - 1], maxDays);

	 char *sign;
	if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) sign = "Aries";
	else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) sign = "Taurus";
	else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) sign = "Gemini";
	else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) sign = "Cancer";
	else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) sign = "Leo";
	else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) sign = "Virgo";
	else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) sign = "Libra";
	else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) sign = "Scorpio";
	else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) sign = "Sagittarius";
	else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) sign = "Capricorn";
	else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) sign = "Aquarius";
	else sign = "Pisces";

	printf("Zodiac sign: %s\n", sign);
	return 0;
}
