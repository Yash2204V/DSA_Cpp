#include<iostream>
#include<limits.h>
using namespace std;

void largestRowSum(int arr[][4], int row, int col){

    int max = INT_MIN;
    int rowIndex;
    int sum;
    for(int i = 0; i<row; i++){
        sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        if(max < sum){
            max = sum;
            rowIndex = i;

        }
    }
    cout << "The maximum row sum is : " << max << " having rowIndex: " << rowIndex << endl;
}

void largestColSum(int arr[][4], int row, int col){

    int max = INT_MIN;
    int colIndex;
    int sum;
    for(int j = 0; j<col; j++){
        sum = 0;
        for(int i = 0; i<row; i++){
            sum += arr[i][j];
        }
        if(max < sum){
            colIndex = j;
            max = sum;
        }
    }
    cout << "The maximum col sum is : " << max << " having colIndex: " << colIndex;
}


int main(){
    int arr[4][4];
    
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    largestRowSum(arr,4,4);
    largestColSum(arr,4,4);
    return 0;

}