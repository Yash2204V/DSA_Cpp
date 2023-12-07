#include<iostream>
using namespace std;

// !!!!!!!!!!!!!!!!!! WRONG !!!!!!!!!!!!!!!!!!!
// check whether it's pallidrone or not.

bool isValid(char ch){
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
        return true;
    }
    return false;
}


char toLowerCache(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int ch = 0;
    int e = n-1;

    while(ch<=e) {
        if( isValid(a[ch]) && isValid(a[e]) ){
        if(toLowerCache( a[ch] ) != toLowerCache( a[e] ) )
        {
            return 0;       
        }
        else{
            ch++;
            e--;
        }
        }
        else{
            ch++;
            e--;
        }
    }
    return 1;
}

int main(){
/*  // IMPORTANT THING TO NOTE~ THE KEY DIFFERENCE BETWEEN STRING & CHARACTER.
    char ch = "Yash Varma";
    cout << ch << endl;
    string s[100] = {'y','a','s','\0','h','\0'}; // But no impact on s when having null terminator in b/w.
    cout << ch;
     */
    // char ch[20] = "c1 0$d@eeD olc";
    // if(checkPalindrome(ch,14)){
    //     cout << "It's pallindrome";

    // }
    // else{
    //     cout << "It's not pallindrome";
    // }
    return 0;
}