#include <stdio.h>

int main(void)
{
    int weight, total = 0;
    char c;
    scanf("%d %c", weight, &c);
    if(c == 'y') {
        total += 5;
    }
    if(weight <= 1000) {
        total += 8;
    } else {
        total += 8;
        weight -= 1000;
        while(weight >= 500) {
            total +=
            weight -= 500;
        }
    }
    return 0;
}
