#include<iostream>
using namespace std;

void spiralArray(int arr[][3], int row, int col){

    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    int count = 0;
    int total = row*col;
    while(count < total){
        for(int index = startCol; count < total && index <= endCol; index++){
            cout << arr[startRow][index] << " ";
            count ++;
        }
        startRow++;

        for(int index = startRow; count < total && index <= endRow; index++){
            cout << arr[index][endCol] << " ";
            count ++;
        }
        endCol--;

        for(int index = endCol; count < total && index >= startCol; index--){
            cout << arr[endRow][index] << " ";
            count ++;
        }
        endRow--;

        for(int index = endRow; count < total && index >= startRow; index--){
            cout << arr[index][startCol] << " ";
            count ++;
        }
        startCol++;
    }
}
int main(){
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    spiralArray(arr,3,3);

    return 0;
}