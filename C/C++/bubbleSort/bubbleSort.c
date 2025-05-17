#include <stdio.h>


int main(void){
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

   // Bubble Sort
   for (int i = 0; i < n; i++){
    for (int j = 0; j < n - 1; j++){
        if (arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }


    // Printing Sorted Array
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}