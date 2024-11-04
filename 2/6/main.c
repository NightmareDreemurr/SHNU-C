#include <stdio.h>

int main(void)
{
    int weight;
    int total = 0;
    char c;
    scanf("%d %c", &weight, &c);
    if(c == 'y') {
        total += 5;
    }
    if(weight <= 1000) {
        total += 8;
    } else {
        total += 8;
        weight -= 1000;
        if(weight > 0){
            while(weight >= 500) {
                total += 4;
                weight -= 500;
            }
            if(weight > 0){
                total += 4;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
