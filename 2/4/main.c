#include <stdio.h>

int main(void)
{
    char a[100];
    int i = 0;
    while((a[i] = getchar() )!= '\n') {
        i++;
    }
    int j = 0;
    while(j <= i) {
        if((i - j) % 3 == 0 && j != 0 && j != i) {
            putchar(',');
        }
        putchar(a[j]);
        j++;
    }

    return 0;
}
