#include<iostream>
using namespace std;

void printArray(int **arr, int m, int n){
    
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout <<arr[i][j] << " ";
        }
        cout << endl;
    }
}

void initializeArray(int **arr, int m, int n){
    cout << "Initialize the 2D Array:\n";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

void releaseMemory(int **arr, int m, int n){
    for (int i = 0; i < m; i++)
    {
        delete []arr[i];
    }
    delete []arr;
}

int main(){
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;
    int **arr = new int*[m];

    int n;
    cout << "Enter the number of columns: ";
    cin >> n;

    for(int i = 0; i<m; i++){
        arr[i] = new int[n];
    }

    // Dynamically Allocating Memory~ Initializing, Printing & Releasing it.
    initializeArray(arr, m, n);
    printArray(arr, m, n);
    releaseMemory(arr, m, n);
    return 0;
}