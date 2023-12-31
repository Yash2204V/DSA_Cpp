#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << 2*i - 1 + (j-1) << " ";
        }
        cout << endl;
    }
    return 0;
}