#include<iostream>
#include<math.h>
using namespace std;

int powerOfTwo(int n){
    if(n == 0)
        return 1;
    return 2*pow(2,n-1);
}

int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

void counting(int n){
    if(n==0)
        return;
    counting(n-1); 
    cout << n << " "; // processing
    // The Recursive relation is below processing<cout>~ TAIL RECURSION. 3 2 1 ~ and visa versa~ HEAD RECURSION. 1 2 3
}

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
/*     int ans = powerOfTwo(n);
    int facto = fact(n);
    cout << ans << " " << facto << '\n'; */
    counting(n);
    return 0;
}