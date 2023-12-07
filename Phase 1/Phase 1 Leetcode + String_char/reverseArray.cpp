#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverseArray(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i<= size/2){
        swap(arr[i++],arr[j--]);
    }
}
int main(){
    int arr[5] = {2,4,1,6,7};
    int size = 5;
    printArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}