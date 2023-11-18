#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start <= end){ 
        // Not applicable only for the start > end .
        if(key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = (start + end)/2; Can be a tricky part for the range of 2^31 - 1. Therefore, -->
        mid = start - (start - end)/2;
    }
    return -1;
}

int main(){
    int evenArr[6] = {2,4,8,23,46,77};
    int oddArr[5] = {1,3,44,56,78};
    int index = binarySearch(oddArr,5,56);
    cout << "The Searched is at index: " << index << endl;

    return 0;
}