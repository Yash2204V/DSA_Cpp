#include<iostream>
#include<limits.h>
using namespace std;
void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // Here, I am going to sort the array containing 0 1 2.
    int arr[7]= {0,1,2,1,2,1,2};
    //              0 1 2
    int count[3] = {0,0,0};

    printArray(arr,7);

    int l = 0;
    while(l<7){
        count[arr[l]] = count[arr[l]] + 1;
        l++;
    }

    //  1 3 3
    int i =0, j =0;
    while(i < 3){ //count array chalaya.
    if(count[i]>0){
        arr[j] = i;
        count[i] = count[i] - 1;
        j++; //Given array move.
    }
    else{
        i++;
    }
} 
    printArray(arr,7);

    return 0;
}