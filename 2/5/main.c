#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a = 2147483647, b, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    while(a > b || b > c || a > c) {
        if(a > b) {
            swap(&a, &b);
        }
        if(a > c) {
            swap(&a, &c);
        }
        if(b > c) {
            swap(&b, &c);
        }
    }
    if(a + b > c) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}
