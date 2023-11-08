#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no.: ";
    cin >> n;
    // #1
    for(int i = 1; i <= n; i++){
        char start = 'A' + (i-1);
        for(int j = 1; j <= n; j++){
            cout << start << " ";
            start ++;
        }
        cout << '\n';
    }
    cout << '\n';
    // #2
    for(int i = 1; i <= n; i++){
        int space = n-i;
        int j = 1;
        while(j <= space){
            cout << "  ";
            j++;
        }
        j = 1;
        int star = i;
        while(j <= star){
            cout << "* ";
            j++;
        }
        cout << '\n';
    }
    cout << '\n';

    // #3
    for(int i = 1; i <= n; i++){
        int start = n-(i-1);
        for(int j = 1; j <= start; j++){
            cout << "* ";
        }
        cout << '\n';
    }
    cout << '\n';

    // #4   
    {
        int i = 1;
        while(i<=n){
            int  j = 1;
            int space = i-1;
            while(j <= space){
                cout << "  ";
                j++;
            }
            int k = 1;
            int star = n - (i-1);
            while(k <= star){
                cout << "* ";
                k++;
            }
            i++;
            cout << '\n';
        }
    }
    cout << '\n';
    //  #5
        {
        int i = 1;
        while(i<=n){
            int  j = 1;
            int space = i-1;
            while(j <= space){
                cout << "  ";
                j++;
            }
            int k = 1;
            int star = n - (i-1);
            while(k <= star){
                cout << i << " ";
                k++;
            }
            i++;
            cout << '\n';
        }
    }
        cout << '\n';
    // #6
    {
        int i = 1;
        while(i<=n){
            int j = 1;
            int space = n-i;
            while(j <= space){
                cout << "  ";
                j++;
            }
            int star = i;
            int k = 1;
            while(k <= star){
                cout << i << " ";
                k++;
            }
            i++;
            cout << '\n';
        }
    }
        cout << '\n';
    // #7 
        {
        int i = 1;
        while(i<=n){
            int  j = 1;
            int space = i-1;
            while(j <= space){
                cout << "  ";
                j++;
            }
            int k = 1;
            int fill = n - (i-1);
            while(k <= fill){
                cout << i + (k-1) << " ";
                k++;
            }
            i++;
            cout << '\n';
        }
    }
        cout << '\n';
    // #8
    {
        int i = 1;
        int count = 1;
        while(i<=n){
            int space = n-i;
            int j = 1;
            while(j<=space){
                cout << "  ";
                j++;
            }
            int fill = i;
            int k = 1;
            while(k<=fill){
                cout << count << " ";
                count ++;
                k++;
            }
            i++;
            cout << '\n';
        }
    }
        cout << '\n';
    // #9 final loop 1.0
    {
        int i = 1;
        while(i<= n){
            int j = 1;
            int space = n - i;
            while(j <= space){
                cout << "  ";
                j++;
            }
        /*  int fill1 = i;
            int k = 1;
            int count = 1;
            while(k<=fill1){
                cout << count << " ";
                k ++;
                count ++;
            } */
            // Another  way
            int fill1 = i;
            int k = 1;
            while(k<=fill1){
                cout << k << " ";
                k ++;
            } 

            int l = 1;
            int fill2 = i-1;
            while(l <= fill2){
                cout << i - l << " ";
                l++;
            }
            i++;
            cout << '\n';
        }
    }
    cout << '\n';
    // #10 final loop 2.0
    {
        int i = 1;
        while(i<=n){
            int j = 1;
            int fill1 = n -(i-1);
            while(j<=fill1){
                cout << j << " ";
                j++;
            }
            int k = 1;
            int star = 2*i -2;
            while(k <= star){
                cout << "* ";
                k++;
            }
            int l = 1;
            int fill2 = n -(i-1);
            while(l <= fill2){
                cout << n - (i-1) - (l-1) << " ";
                l++;
            }
            i++;
            cout << '\n';
        }







    }
}

