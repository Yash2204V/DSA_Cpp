#include<iostream>
#include<vector>
using namespace std;


void releaseMemory(int **arr, int m, int n){
    for (int i = 0; i < m; i++)
    {
        delete []arr[i];
    }
    delete []arr;
}

int main(){
    int m;
    cout << "Enter the row of the 2D Array: ";
    cin >> m;
    vector<int> temp;

    int **arr = new int*[m];
    cout << "\nNow, for individually mention the column no: \n";
    int n;
    for (int i = 0; i < m; i++)
    {
        cout << "\nEnter the no. of columns for " << i+1 << " Row : ";
        cin >> n;   
        arr[i] = new int[n];
        temp.push_back(n);
        // Insert here now.
        for (int j = 0; j < n; j++)
        { 
            cout << "Inserting row " << i+1 << " and column " << j+1 << " Elements : ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int col;
    // Printing the 2D Array.
    for (int i = 0; i < m; i++){
        col = temp[i]-1;
        int j = 0;
        while (col >= 0)
        {
            cout << arr[i][j] << " ";
            col--;
            j++;
        }
        cout << endl;
    }
    releaseMemory(arr,m,n);
    return 0;
}