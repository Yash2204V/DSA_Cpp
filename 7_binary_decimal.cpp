#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // #2 Binary to Decimal, eg, n = 100 --> 4

    int n;
    cout << "Enter the no.: ";
    cin >> n; // 100
    int i = 0, bit;
    int add = 0;
    while(n != 0){
        bit = n%10; // 0,0,1
        add = (bit*(pow(2,i))) + add; // 0,0,4
        n = n/10;
        i++;
    }
    cout << add;
}