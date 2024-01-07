#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
    if(size==0)
        return 0;
    else{
        int sum = arr[0];
        return sum+arraySum(arr+1,size-1);
    }
}

int main(){
    int arr[6] = {7,53,2,562,2,4};
    int size = 6;
    int ans = arraySum(arr,size);
    cout << "The sum of array is: " << ans;
    return 0;
}