#include<iostream>
using namespace std;

void  printString(char ch[]){
    int i = 0;
    while(ch[i] != '\0'){
        cout << ch[i];
        i++;
    }
    cout << endl;
}

char LowerToUpper(char ch){
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 'a' + 'A';
    }
    return ch;
}

bool checkPallindrome(char ch[], int size){
    int i = 0;
    int j = size - 1;
    while(i<=j){
        if(LowerToUpper(ch[i]) != LowerToUpper(ch[j])){
            return false;
        }
        i++,j--;
    }
    return true;
}

int getLength(char ch[]){
    int count = 0;
    int i = 0;
    while(ch[i] != '\0'){
        count ++;
        i++;
    }
    return count;
}

void reverseString(char ch[], int size){
    int i = 0;
    int j = size - 1;
    while(i<=j){
        swap(ch[i++],ch[j--]);
    }
}

int main(){
    char ch[5] = {'Y','A','S','H','\0'};
    char ch1[50] = "Noon";
    cout << ch << endl;
    cout << "Length of the string is: " << getLength(ch) << endl;
    cout << "Before String" << endl;
    printString(ch);
    reverseString(ch,getLength(ch));
    cout << "After String" << endl;
    printString(ch);
    if(checkPallindrome(ch1,getLength(ch1))){
        cout << "It's pallindrome";
    }
    else{
        cout << "It's not pallindrome";
    }
/*     cout << '\n';
    printString(ch1);
    if(checkPallindrome(ch1,getLength(ch1))){
        cout << "It's pallindrome";
    }
    else{
        cout << "It's not pallindrome";
    }
 */

    return 0;
}