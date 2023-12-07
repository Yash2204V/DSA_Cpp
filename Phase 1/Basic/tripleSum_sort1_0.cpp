
#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    cout << endl;
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
} 

void tripleSum(int arr[], int size, int key){

    for(int i = 1; i<size; i++){
        for(int j = i+1; j<size; j++){
            for(int k = j+1; k<size; k++){
                if(i + j + k == key){
                cout << i << j << k << " ";
            }
        }
        }
    }
}

void sort1_0(int arr[], int size){

    int i = 0;
    int j = size - 1;
    while(i < j){

        while(arr[i] == 0 && i<j){
            i++;
        }
        while(arr[j] == 1 && i<j){
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j++;
    }


}
int main(){

    int arr[6]= {0,1,0,0,1,1};
    int key = 7;
    // printArray(arr, 6);
    tripleSum(arr, 6, key);




    return 0;
}