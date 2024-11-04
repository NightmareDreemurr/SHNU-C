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

int main(void) {
    int year, month;
    scanf("%d-%d", &year, &month);
    printf("%d", days_in_month(year, month));
    return 0;
}
