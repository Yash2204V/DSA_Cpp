#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            cout << "Inserted by nums1: " << nums1[k] << " on index : " << k << " ";
            cout << endl;
            i--; k--;
        }
        else{
            nums1[k] = nums2[j];
            cout << "Inserted by nums2: " << nums1[k] << " on index : " << k << " ";
            cout << endl;
            j--; k--;
        }
    }
    while(j>=0){
        nums1[k] = nums2[j];
            cout << "Inserted by nums2: " << nums1[k] << " on index : " << k << " ";
            cout << endl;
        j--; k--;
    }
}

void ReverseArray(int arr[], int size){
    int i = 0;
    int j = size - 1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void RotateArray(int arr[], int size, int k){
    int temp[100];

    for(int i = 0; i<size; i++){
        temp[(i+k)%size] = arr[i];
    }
    for(int i = 0; i<size; i++){
        arr[i] = temp[i];
    }
}

int sortOrRotate(int arr[], int size){
    int count = 0;
    int i;
    for(i = 0; i<size; i++){
        if(arr[i] > arr[i+1]){
            count ++;
        }
    }
    if(arr[i] < arr[i+1]){
        count ++;
    }
    return count <=1;
}

int SumTwoArray(int arrA[], int arrB[], int sizeA, int sizeB){
    int val = -1;
    float dig1 = 0, dig2 = 0;
    for(int i = sizeA-1; i>= 0; i--){
        val = arrA[i];
        dig1 = val*(pow(10,sizeA-(i+1))) + dig1;
    }

    for(int i = sizeB-1; i>= 0; i--){
        val = arrB[i];
        dig2 = val*(pow(10,sizeB-(i+1))) + dig2;
    }
    // cout << "The Sum is: "<< dig1 + dig2 << endl;
    return dig1 + dig2;
}

// Sum two array leetcode solution!
/* #include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> sums;
	int val = -1;
    long long dig1 = 0, dig2 = 0;
    for(int i = n-1; i>= 0; i--){
        val = a[i];
        dig1 = val*(pow(10,n-(i+1))) + dig1;
    }

    for(int i = m-1; i>= 0; i--){
        val = b[i];
        dig2 = val*(pow(10,m-(i+1))) + dig2;
    }
    // cout << "The Sum is: "<< dig1 + dig2 << endl;
    int sum = dig1 + dig2;
    int digit;
    while(sum != 0){
        digit = sum%10;
        sums.push_back(digit);
        sum=sum/10;
    }
	reverse(sums.begin(),sums.end());
    return sums;

} */


int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[5] = {3,7,5,1,2};
    int arrA[4] = {5,7,3,1};
    int arrB[2] = {9,1};
    // int sum = SumTwoArray(arrA,arrB,4,2);
    // cout << "Sum: " << sum;

    return 0;
}