#include <stdio.h>

int main() {
    int array[100]; 
    int n, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i += 2) {
        sum += array[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
