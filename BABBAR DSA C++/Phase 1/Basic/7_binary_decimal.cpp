#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // #2 Binary to Decimal, eg, n = 100 --> 4

    int n;
    cout << "Enter the no.: ";
    cin >> n;

    int bit, count = 0;
    while(n != 0){
        bit = n&1;
        if(bit == 1){
            count ++;
        }
        n = n>>1;
    }
    if(count == 1){
        cout << "power of 2";
    }
    else{
        cout << "not a power of 2";
    }
    return 0;
}