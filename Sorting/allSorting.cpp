#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size){
    int j;
    for(int i = 0; i<size-1; i++){
        int minIndex = i;
        for(j = i+1; j<size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}


void optimizedBubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        cout << endl << "Comparison no. of i: "<< i+1 << endl << endl;
        bool count = false;
        for(int j = 0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count = true;
            }
            cout << "Comparison no. of j: "<< j+1 << endl;
        }
        if(count == false){
            break;
        }
    }

}

void bubbleSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        cout << endl << "Comparison no. of i: "<< i+1 << endl;
        for(int j = 0; j<(n-i-1); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            cout << "Comparison no. of j: "<< j+1 << endl;
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        for(int j = i-1; j >= 0; j--){
            if(temp > arr[j]){
                break;
            }
            else if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int arr[5] = {9,4,2,7,1};
    // optimizedBubbleSort(arr,5);
    // bubbleSort(arr,5);
    // insertionSort(arr,5);
    // selectionSort(arr,5);
    printArray(arr,5);

    return 0;
}