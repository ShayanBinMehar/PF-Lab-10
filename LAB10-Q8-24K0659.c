#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size) {
        return -1;
    }

    if (arr[index] == target) {
        return index;
    }

    linearSearch(arr, size, target, index + 1);
}

int main() {
    
	int arr[] = {2, 4, 6, 8, 10};
    int target;
	int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the target to search in array : \n");
    scanf("%d", &target);
    
    int result = linearSearch(arr, size, target, 0);

    if (result == -1) {
        printf("Target element not found.\n");
    } else {
        printf("Target element found at index %d.\n", result + 1);
    }

    return 0;
}