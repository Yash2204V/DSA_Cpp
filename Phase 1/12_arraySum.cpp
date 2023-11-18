#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
} 

int ArraySum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = arr[i] + sum;
    }
    return sum;
}

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(key == arr[i]){
            return true;
        }
    }
    return false;
}

void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}
int main(){
    //             0  1  2  3  4            
    int arr[5] = {445,63,67,22,764};
    cout << "Sum: " << ArraySum(arr,5) << endl;
    if(linearSearch(arr,5,44)){
        cout << "Element exist";
    }
    else{
        cout << "Element not exist";
    }
    ReverseArray(arr,5);
    printArray(arr,5);
    return 0;
}