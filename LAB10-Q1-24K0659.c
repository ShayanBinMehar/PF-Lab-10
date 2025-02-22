#include <stdio.h>

void recursiveArray(int array[], int size) {
    if (size >= 0) {
        printf("Element on index %d is %d\n", size, array[size]);
        recursiveArray(array, size - 1);
    }
}

int main() {
    int ubound;

    printf("Enter the upper bound for the array: ");
    scanf("%d", &ubound);

    int array[ubound];

    for (int x = 0; x < ubound; x++) {
        printf("Enter the value in integer: ");
        scanf("%d", &array[x]);
    }

    recursiveArray(array, ubound - 1); // Adjust the size to start from 0-based index

    return 0;
}