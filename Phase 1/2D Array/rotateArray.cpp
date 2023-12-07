#include<iostream>
#include<vector>
using namespace std;

void printArray(int matrix[][3], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(int matrix[][3], int row, int col) {
    vector<int> reverse;
    for(int i = 0; i<col; i++){
        
        for(int j = row - 1; j >= 0; j--){
            reverse.push_back(matrix[j][i]);
            // cout << " Current value of martix: " << matrix[i][j] << '\n';
        }
    }
    
    for(int i = 0; i<row; i++){
        
        for(int j = 0; j<col; j++){
            int val = col*i + j;
            // cout << " Value of val : " << val << endl;
            matrix[i][j] = reverse.at(val);
        }
    }
}

int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "Before 2D Array"<< endl;
    printArray(matrix, 3 , 3);
    rotate(matrix, 3,3);
    cout << "After 2D Array"  << endl;
    printArray(matrix, 3 , 3);
    
    return 0;
}