#include<iostream>
#include<limits.h>
using namespace std;

void printString(char ch[]){
    int i = 0;
    while(ch[i] != '\0'){
        cout << ch[i];
        i++;
    }
    cout << endl;
}

int max(int a, int b){
    return a>b?a:b;
}

void reverseString(char ch[], int start, int end){
    while(start<=end){
        swap(ch[start++],ch[end--]);
    }
}

void wordByword(char ch[]){
    int traver = 0;
    int start = 0;
    int end;
    while( ch[traver] != '\0' ){
        if( ch[traver] == ' '){
            end = traver - 1;
            reverseString(ch,start,end);
            start = traver + 1;
        }
        traver ++;
    }
    end+=2;
    traver--;
    reverseString(ch,end,traver);
}

int main(){
    // char ch[80] = "I am the creator of this entire creation, shri krishna said that:)";
    // printString(ch);
    // wordByword(ch);
    // printString(ch);

    return 0;
}