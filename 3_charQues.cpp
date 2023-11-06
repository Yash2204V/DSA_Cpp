#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if(ch >= 65 && ch <= 90){
        cout << "The character is Uppercase";
    }
    else if(ch >= 97 && ch <= 122){
        cout << "The character is Lowercase";
    }
    else if(ch >= 48 && ch <= 57){
        cout << "The character is numeric";
    }
}