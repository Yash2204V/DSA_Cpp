#include<iostream>
using namespace std;

int FirstOccu(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int index;
    while(start <= end){
        if(key == arr[mid]){
            index = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return index;
}

int LastOccu(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int index;
    while(start <= end){
        if(key == arr[mid]){
            index = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return index;
}

int main(){
    int arr[6] = {1,2,2,2,2,4};
    int index1 = FirstOccu(arr,6,2);
    int index2 = LastOccu(arr,6,2);
    cout << "The First & Last Occurence of 2: " << index1 << " " << index2 << endl;
    return 0;
}