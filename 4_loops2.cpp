#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no. : ";
    cin >> n;

    // # 1
    {
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << n - (j-1)<< " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    }
    // # 2
    {
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout << "* "<< " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    }
    // # 3
    {
    int i = 1, count = 0;
    while(i<=n){
        int j =1;
        while(j<=i){
            count ++;
            cout << count << " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    }
    // # 4
    {
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout << i + (j-1) << " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    }
    // # 5 character looping
    {
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            char ch = 'A' + (j-1);
            cout <<  ch << " ";
            j++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    }
    // # 6 
    {
    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << '\n';
        i++;
    }
    }
    cout << '\n';
    // # 7
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' - 1 + i + (j - 1);
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << '\n';
        i++;
    }
    cout << '\n';
    // #8
    {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                char ch = (n-1) - (i-j) + 'A';
                cout << ch << " ";
                j++;
            }
            i++;
            cout << '\n';
        }
    }
}
