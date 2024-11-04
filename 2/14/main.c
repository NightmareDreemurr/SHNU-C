#include <stdio.h>
#include <stdbool.h>

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int year, int month) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && is_leap(year)) {
        return 29;
    }
    return days[month];
}

int main() {
    int year, month, day;

    scanf("%d-%d-%d", &year, &month, &day);

    day--;
    if (day == 0) {
        month--;
        if (month == 0) {
            year--;
            month = 12;
        }
        day = days_in_month(year, month);
    }

    printf("%d-%d-%d", year, month, day);

    return 0;
}