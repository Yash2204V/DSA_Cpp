#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void sort2_1_0(int arr[], int size){
    int low = 0,mid = 0;
    int end = size - 1;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            swap(arr[i], arr[low++]);
        }
        else if(arr[i] == 1){
            mid++;
        }
        else if(arr[i] == 2 && i <= end){
            swap(arr[i], arr[end--]);
        }
    }
}

int main(){
    int arr[9] = {1,0,2,1,1,0,0,2,1};
    sort2_1_0(arr,9);
    printArray(arr,9);

    return 0;
}