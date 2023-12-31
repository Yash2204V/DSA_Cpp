#include<iostream>
using namespace std;

void printArray(int *arr, int n){
    cout << "Printing the array: " << endl;
    for(int i = 0; i<n; i++){
        // cout << i[arr] << " ";
        cout << arr[i] << " ";
    }
}

void insertArray(int *arr, int n){
    cout << "Insert the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void reverseArray(int *arr, int n){
    int i = 0;
    int j = n - 1;
    while(i<=j){
        swap(arr[i++], arr[j--]);
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    insertArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);
    delete[]arr;
    return 0;
}