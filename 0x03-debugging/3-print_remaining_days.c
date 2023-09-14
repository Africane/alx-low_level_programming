#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many day are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

int is_leap_year(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

void print_remaining_days(int month, int day, int year)
{
    int leap_year = is_leap_year(year);

    if ((month > 12 || month < 1) || (day > 31 || day < 1))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int days_in_month[] = {0, 31, 28 + leap_year, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day < 1 || day > days_in_month[month])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    for (int i = 1; i < month; i++)
    {
        total_days += days_in_month[i];
    }

    total_days += day;

    printf("Day of the year: %d\n", total_days);
    printf("Remaining days: %d\n", 365 + leap_year - total_days);
}
