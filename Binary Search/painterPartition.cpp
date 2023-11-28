#include<iostream>
using namespace std;

int isPossible(int arr[], int n, int k, int mid){
    int painterCount = 1;
    int PaintSum = 0;
    for(int i = 0; i<n; i++){
        if(PaintSum + arr[i] <= mid){
            PaintSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
        PaintSum = arr[i];

/* REMEMBER: I have read your code and I think I have found the mistake. The mistake is in the line where you assign PaintSum to arr[i] after incrementing the painterCount. This line should be inside the else block, not outside. Otherwise, you are skipping the current element and not adding it to the PaintSum of the next painter. This leads to an incorrect calculation of the minimum time required. */
        }
        if(painterCount > k){
            return false;
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int k){
    int s = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s <= e){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    } 
    return mid;
}

int main(){
    int arr[4] = {10,20,30,40};
    cout << painterPartition(arr,4,2) << endl;

    return 0;
}

