#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(n-1)*factorial(r);
    return num/denom;
}

bool isPrime(int n){
    for(int i =2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int nthTermAP(int n){
    int AP = 3*n + 7;
    return AP;
}

int bitVal(int n){
    int bit, count = 0;
    while(n != 0){
        bit = n&1;
        if(bit == 1){
            count ++;
        }
        n = n >> 1;
    }
    return count;
}

int Fibo(int n){
    int a = 0, b = 1, c;
     for(int i = 2; i<n; i++){
        c = a + b;
        a = b;
        b = c;
     }
     return c;
}
int main(){
    int n;
    cin >> n;
    // Comment one for the nCr calculation.
/*     int n ,r ,ans;
    cin >> n >> r;
    ans = nCr(n,r);
    cout << ans; */

    // Comment one for the Prime no. calculation.
/*     cout << endl << "Is prime or not! check?" << endl;
    if(isPrime(n)){
        cout << "It is prime no.";
    }
    else if(!isPrime(n)){
        cout << "It is not prime no.";
    } */
    // Comment one for the nth term AP calculation.
/*     cout << "nth term of " << n << ": " << nthTermAP(n); */

    // Comment one for the bit of a & b mentioned no.
/*     int a, b;
    cin >> a >> b;
    cout << "Bit for a: " << bitVal(a) << endl;
    cout << "Bit for b: " << bitVal(b) << endl; */
    // Comment one for the nth Fibonacci no.
    cout << "nth fibocacci is : " << Fibo(n);

}