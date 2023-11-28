#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. to get the pattern : ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j < i; j++){
            cout << i-j << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i + (j-1) << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            char ch = 'A' + (i-1) + (j-1);
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            char ch = 'A' + n - (i-1) + (j-2);
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i = 1; i<=n; i++){
        int space = i - 1;
        for(int j = space; j>0; j--){
            cout << "  ";
        }
        int fill = n - (i-1);
        for(int j = 1; j<=fill; j++){
            cout << i + (j-1) << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for(int i = 1; i<=4; i++){
        int fill1 = n - (i-1);
        for(int j = 1; j <= fill1; j++){
            cout << j << " ";
        }
        int space = 2*(i-1);
        for(int j = 0; j<space; j++){
            cout << "*" << " ";
        }
        int fill2 = n - (i-1);
        for(int j = 1; j <= fill2; j++){
            cout << n - (i-1) - (j-1) << " ";
        }
        cout << endl;
    }

    return 0;
}