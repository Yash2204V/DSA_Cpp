#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    // Reverse the integer
    int n;
    cin >> n;
    int add = 0;
    while(n != 0){
        if(add > INT_MAX/10 || add < INT_MIN/10){
            add = 0;
            break;
        }
        int digit = n%10;
        add = (add*10) + digit;
        n = n/10;
    }
    cout << add;
    cout << '\n';

    
    return 0;
}