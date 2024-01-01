#include<iostream>
using namespace std;

void sayTheNo(string str[], long long n){
    if(n==0)
        return;

    long long digit = n%10; // Individual digit.
    n = n/10;

    sayTheNo(str,n);
    cout << str[digit] << " ";
}

int main(){
    string str[10] ={("ZERO"),("ONE"),("TWO"),("THREE"),("FOUR"),("FIVE"),("SIX"),("SEVEN"),("EIGHT"),("NINE")};
    long long n;
    cout<< "Enter the number: ";
    cin >> n;
    sayTheNo(str,n);
    return 0;
}

