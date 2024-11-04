#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int total = 0, count = 0;
    int input;
    int numbers[100];

    while (1) {
        scanf("%d", &input) != 1;

        if (input == -1) {
            break;
        }

        numbers[count++] = input;
    }



    qsort(numbers, count, sizeof(int), compare);
    int i;
    for ( i = 2; i < count - 2; i++) {
        total += numbers[i];
    }

    double final_result = (double)total / (double)(count - 4);
    printf("%.2lf\n", final_result);

    return 0;
}
