#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int col = 0;
    while(col < 3){
        if(col%2 == 0){
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
        if(col%2 != 0){
            for(int row = 2; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }
        col++;
    }
    return 0;
}