#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main(){
    int arr[8] = {2,6,4,8,1,7,35,9};
    if(isSorted(arr,8))
        cout << "It is a sorted array.";
    else
        cout << "It is not a sorted array.";
        
    return 0;
}
