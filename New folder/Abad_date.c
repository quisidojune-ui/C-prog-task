#include <stdio.h>

void printMonthName(int month) {
    switch (month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
}

int maxDaysInMonth(int month, int leapYear) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return leapYear ? 29 : 28;
        default:
            return 0;
    }
}

const char *zodiacSign(int month, int day) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "Aries";
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "Taurus";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "Gemini";
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "Cancer";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "Leo";
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "Virgo";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "Libra";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "Scorpio";
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "Sagittarius";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "Capricorn";
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "Aquarius";
    else return "Pisces";
}

int main(void) {
    int month, day, year;
    int leapYear;

    printf("Input month, day and year: ");
    if (scanf("%d %d %d", &month, &day, &year) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (month < 1 || month > 12) {
        if (day < 1 || day > 31) {
            printf("Invalid month: %d\n", month);
            printf("Invalid day: %d\n", day);
        } else {
            printf("Invalid date: No month %d\n", month);
        }
        return 0;
    }

    int maxDays = maxDaysInMonth(month, leapYear);

    if (day < 1 || day > maxDays) {
        printf("Invalid date: ");
        printMonthName(month);
        printf(" %d, %d\n", day, year);

        if (month == 2 && day == 29 && !leapYear) {
            printf("%d is not a leap year\n", year);
        }
        return 0;
    }

    printf("Date entered: ");
    printMonthName(month);
    printf(" %d, %d\n", day, year);

    printMonthName(month);
    printf(" has %d days.\n", maxDays);

    printf("Zodiac sign: %s\n", zodiacSign(month, day));

    return 0;
}
