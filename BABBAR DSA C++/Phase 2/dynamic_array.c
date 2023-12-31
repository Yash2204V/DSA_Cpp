#include<stdio.h>
#include<stdlib.h>

void printArray(int *arr, int n){
    printf("Printing the array:\n");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void insertArray(int *arr, int n){
    printf("Insert the elements in the array\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

void reverseArray(int *arr, int n){
    int i = 0;
    int j = n - 1;
    while(i<=j){
        swap(&arr[i++], &arr[j--]);
    }
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n*sizeof(int));
    insertArray(arr, n);
    reverseArray(arr, n);
    printArray(arr,n);
    free(arr);

    return 0;
}