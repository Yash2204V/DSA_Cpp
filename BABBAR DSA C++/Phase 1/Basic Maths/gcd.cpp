#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(a == 0)
    return b;

    if(b == 0)
    return a;

    while(a != b){
        if(a>b){
            a = a-b;
        }
        if(a<b){
            b = b-a;
        }
    }
    if(a == 0)
    return b;

    if(b == 0)
    return a;
}

int main(){
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    int ans = gcd(a,b);
    cout << "The GCD would be: " << ans;
    return 0;
}