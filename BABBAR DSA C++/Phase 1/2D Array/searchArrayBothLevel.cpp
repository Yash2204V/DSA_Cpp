#include<iostream>
#include<vector>
using namespace std;

bool searchMatrixAdvance(int matrix[][5], int row, int col, int target) {
    
    int rowIndex = 0;
    int colIndex = col - 1;
    
    while(rowIndex < row && col >= 0){
        int element = matrix[rowIndex][colIndex];
        if( element == target){
            return true;
        }
        else if(element < target){
            rowIndex ++;
        }
        else{
            colIndex --;
        }
    }
    return false;
}

bool search2DArray(int matrix[][4], int row, int col, int target){
    int start = 0;
    int end = col*row - 1;
    int mid = start + (end-start)/2;
    while(start <= end){

        if(matrix[mid/col][mid%col] == target){
            return true;
        }
        
        else if(matrix[mid/col][mid%col] > target){
            end = mid - 1;
        }    
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
        return false;
}

int main(){
    int matrix[5][5] = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int ans = searchMatrixAdvance(matrix, 5,5,13);
    cout << ans;
    return 0;
}