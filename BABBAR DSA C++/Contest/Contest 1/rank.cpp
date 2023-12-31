#include<iostream>
using namespace std;

void printArray(int s[], int size){
    for(int i = 0; i<size; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

int classTest(int a[], int size, int k) {
    // n size of array, k the rank of the array
    int temp[100] = {0};
    int max = -1;
    for(int i = 0; i < size; i++){
        if(max < a[i]){
            max = a[i];
            // cout << " The maximum value is: " << max << endl;
        }
    }
    for(int i = 0; i < size; i++)
    {
        temp[a[i]]++;   
    }
    // printArray(temp,max+1);
    int rank = 0;
        cout << " The maximum value is: " << max << endl;
    for(int i = max; i>=0; i--){
        if(temp[i] != 0){
            rank++;
            cout << " The rank of the ninja's fighting is : " << i << endl;
        }
        if(rank == k){
            return i;
            break;
        }
    }
}


int main(){
    int a[5] = {2,3,5,5,4};
    int rank = classTest(a,5,3);
    cout << " Marks of the 3rd rank Ninja is: " << rank;
    return 0;
}