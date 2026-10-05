#include <stdio.h>

int is_leap_year(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int days_in_month(int month, int year)
{
    static const int days[] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
    return days[month] + (month == 1 && is_leap_year(year));
}

/* Return the weekday of the first day of the month (0 = Sunday). */
int first_weekday(int month, int year)
{
    int y = year;
    int m = month + 1;

    if (m < 3) {
        --y;
        m += 12;
    }

    return (1 + (13 * m - 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
}

int main(void)
{
    static const char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year < 1) {
        fprintf(stderr, "Please enter a positive year.\n");
        return 1;
    }

    printf("\nCalendar for %d\n", year);
    for (int month = 0; month < 12; ++month) {
        printf("\n      %s\n", months[month]);
        puts("Su Mo Tu We Th Fr Sa");

        int weekday = first_weekday(month, year);
        for (int i = 0; i < weekday; ++i)
            printf("   ");

        for (int day = 1; day <= days_in_month(month, year); ++day) {
            printf("%2d ", day);
            if (++weekday == 7) {
                putchar('\n');
                weekday = 0;
            }
        }
        if (weekday != 0)
            putchar('\n');
    }

    return 0;
}