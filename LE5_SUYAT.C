#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers (enter 0 or negative number to stop):\n");

    while (1) {  
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            break;  
        }

        sum += num;  
    }

    printf("Total sum of positive numbers: %d\n", sum);

    return 0;
}