#include<iostream>
#include<stdlib.h>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    int index = s;

    int *arr1 = (int*)malloc(len1*sizeof(int));
    int *arr2 = (int*)malloc(len2*sizeof(int));
    for(int i = 0; i<len1; i++){
        arr1[i] = arr[index++];
    }
    index = mid + 1;
    for(int i = 0; i<len2; i++){
        arr2[i] = arr[index++];
    }

    int index1 = 0;
    int index2 = 0;
    index = s;

    while(index1<len1 && index2<len2){
        if(arr1[index1] < arr2[index2]){
            arr[index++] = arr1[index1++];
        }
        else{
            arr[index++] = arr2[index2++];
        }
    }
    while(index1<len1){
        arr[index++] = arr1[index1++];

    }
    while(index2<len2){
        arr[index++] = arr2[index2++];
    }
    free(arr1);
    free(arr2);
}

void mergeSort(int arr[], int s, int e){
    if(s>=e)
        return;
    int mid = (s+e)/2;
    cout << endl << mid << endl;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr,s,e);
}

int main(){
    int arr[5] = {6,2,262,272,3};
    cout << "Before Array" << endl;
    print(arr,5);
    mergeSort(arr,0,4);
    cout << "After Array" << endl;
    print(arr,5);


    return 0;
}
