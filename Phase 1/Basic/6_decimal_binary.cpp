#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // #1 Decimal to Binary, eg. n = 4 --> 100

/*     int n;
    cout << "Enter the no.: ";
    cin >> n;
    int i = 0, rem;
    float add = 0;
    while(n != 0){
        rem = n%2;
        add = (rem*(pow(10,i))) + add; // The pow function return double value, so its better if you float instead of int in ans.
        n = n/2; // 2,1,0
        i++; 
    }
    cout << "Binary :" << add;

    cout << '\n'; */
    int n, bit, i = 0;
    cout << "Enter the no.: "; // 4 --> 100
    cin >> n;
    float add = 0;
    while(n != 0){
        bit = n&1;
        add = (bit*(pow(10,i))) + add;
        n = n>>1;
        i++;
    }
    cout << add;

    // #2 Binary to Decimal, eg. 100 -> 4
/*     {
        int n;
        cout << "Enter the number: ";
        cin >> n;
        int add = 0, 
        while(n != 0){
            bit = n&1;
            add = (bit*(pow(2,i))) + add;   
            n = n>>1;
            i++;
        }
    cout << add;
    }  */
}