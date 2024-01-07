#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){

    //base case
    if(s>e)
        return false;

    int mid = (s+e)/2;

    //processing and R.R
    if(arr[mid] == key)
        return true;
    else{
        if(arr[mid] > key)
            return binarySearch(arr,s,mid-1,key);
        else
            return binarySearch(arr,mid+1,e,key);
    }
}

int main(){
    int arr[14] = {3,5,7,22,82,7,4,1,2,7,27,25,34,5};
    int size = 14;
    int key = 4;

    if(binarySearch(arr,0,size-1,key))
        cout << "It exists";
    else
        cout << "It doesn't exists";
    
    return 0;
}