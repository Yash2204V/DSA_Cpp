#include<iostream>
using namespace std;

void moduloExpo(int x, int m, int n){
    int rev = 1;
    int i = 0;
    while(i <= n){
        rev = (rev * (n%m) )% m;
        i++;
    }
    cout << rev;
}
int main(){
    moduloExpo(4,9,2);
    return 0;
}