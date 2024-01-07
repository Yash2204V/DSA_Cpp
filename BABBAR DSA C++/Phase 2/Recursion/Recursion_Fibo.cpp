#include<iostream>
using namespace std;

int fibo(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int fiboWhileLoop(int n){
    int a = 0, j = 0;
    int b = 1;
    while(j < n-1){
        int temp = a;
        a = b;
        b = temp+b;
        j++;
    }
    cout << b;
}



int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = fibo(n);
    cout << ans << endl;
    fiboWhileLoop(n);

    return 0;
}