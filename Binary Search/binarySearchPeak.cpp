#include<iostream>
using namespace std;

int Getpivot(int arr[], int size){
    // arr[5] = {6,9,1,3,5};
    //           0 1 2 3 4

    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start < end){ // Remember: Here we're talking about index not element.
        if(arr[mid] > arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int peakMountain(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int main(){
    int arr[6] = {1,3,4,5,7,34};
    int a[7] = {6,9,10,12,1,3,5};
    // cout << "The peak element: " << arr[peakMountain(arr,6)] << endl;
    // cout << "The pivot element: " << a[Getpivot(a,7)] << endl;
    cout << "The Binary search index: " << binarySearch(arr,6,34) << endl;

    
    
    return 0;
}