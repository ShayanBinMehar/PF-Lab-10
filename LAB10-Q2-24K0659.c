#include <stdio.h>
void bubbleSortRecursive(int array[], int n) {
    if (n == 1) {
		return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
           
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }

    bubbleSortRecursive(array, n - 1);
}int main(){
    int ubound;
    printf("Enter the upper bound for the array = \n");
    scanf("%d", &ubound);
    
    int array[ubound];
    for(int x = 0; x < ubound
	; x++){
        printf("Enter the value for the index : ");
        scanf("%d", &array[x]);
    }
    bubbleSortRecursive(array, ubound);

    for(int x = 0; x < ubound; x++){
        printf("Value on the index %d is %d\n", x + 1, array[x]);

    }
}