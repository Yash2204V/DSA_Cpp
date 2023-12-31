#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<char> v, int size){
    for(int i = 0; i<size; i++){
        cout << i << ": "<< v[i] << endl;
    }
    cout << endl;
}


void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}


vector<char> stringCompression(char ch[], int size){
    int count[26] = {0};
    vector<char> v;
    int tempVal;
    for(int i = 0; i<size; i++){
        tempVal = ch[i] - 'a';
        count[tempVal]++;
    }    
    // printArray(count,26);
    for(int i = 0; i<26; i++){
        if(count[i] == 1){
            v.push_back(i + 'a');
        }
        else if(count[i]>1){
            v.push_back(i + 'a');
            v.push_back('0' + count[i]);
        }
    }
    return v;
}

int main(){
    char ch[30] = {'a','a','a','a','b','b','b','b','c','c','c','c','c','c','\0'};
    // o/p: a1b2c4d
    int size = sizeof(ch)/sizeof(char);
    vector<char> ans = stringCompression(ch,size);
    printVector(ans,size);
    return 0;
}