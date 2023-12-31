#include<iostream>
using namespace std;
int main(){
    // Sum & product of the mentioned  number.
/*     int n, pro = 1, sum = 0, r;
    cout << "Enter the number: ";
    cin >> n;
    while(n!=0){
        r = n%10;
        n = n/10;
        pro= pro*r;
        sum= sum + r;
    }
    cout << "Product is : " << pro << endl << "Sum is : " << sum;
    cout << '\n'; */
    
    int n, count = 0;
    cout << "Enter the number: ";
    cin >> n;
    while(n != 0){
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    cout << count;


    
/*     {
    int m, n=1;
    m = 10;
    if(++m){
        cout << n; // A non-zero value. So,executed.
    }
    else{
        cout << ++n;
    }
    cout << '\n';
    
    for(int a = 0, b = 1, c = 2; a>=0 && b>=1 && c >=2; a--,b--,c-- ){
        cout << a << " " << b << " " << c << endl;
    }
}
    cout << '\n';

    int n;
    cout << "Enter the no.: ";
    cin >> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for(int i = 1; i<=n; i++){
        int c = a+b;
        cout << c << " ";
        a = b;
        b = c; 
    }
     */
/*     cout << '\n';
    // PRIME NO.

    int n;
    cout << "Enter the no.: ";
    cin >> n;
    // 1 || 2 || 3 || 4 || 5
    bool isPrime = 1;
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        cout << "Prime no.";
    }
    else
        cout << "not a Prime no."; */

}