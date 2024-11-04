#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        if(month == 3 && day == 1) {
            printf("%d-02-29", year);
            return 0;
        }
    }
    if(day == 1 && month == 1 ) {
        year --;
        printf("%d-12-31", year);
        return 0;
    } else if(day == 1 && month == 3) {
        printf("%d-02-28", year);
        return 0;
    } else if(day == 1 && month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        day = 30;
            month--;
    } else if(day == 1 && month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
        day = 29;
        month--;
    } else {
        day--;
    }
    printf("%d-%02d-%02d", year, month, day);
    return 0;
}
