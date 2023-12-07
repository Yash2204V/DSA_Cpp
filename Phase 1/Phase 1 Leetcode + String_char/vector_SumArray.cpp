#include<iostream>
#include<vector>
using namespace std;

vector<int> SumTwoArray(vector<int> arr1, vector<int> arr2, int m, int n){
    vector<int> sums;
    int i = m-1;
    int j = n-1;
    int sum;
    int carry;
    while(i>=0 && j>=0){
        sum = arr1[i--] + arr2[j--];
        carry = sum/10;
        sum = sums.push_back(sum%10);
    }
    return sum;
}
int main(){
    vector<int> arr1;
    arr1.push_back(4);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(9);
    arr2.push_back(4);

    vector<int> ans = SumTwoArray(arr1,arr2,1,3);
    for(int i:ans){
        cout << i << " ";
    }
    return 0;
}