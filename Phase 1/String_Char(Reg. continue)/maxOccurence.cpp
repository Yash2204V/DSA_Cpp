#include<iostream>
using namespace std;

char maxOccurence(char ch[], int size){
    int count[26] = {0};
    int tempVal;
    for(int i = 0; i<size; i++){
        tempVal = ch[i] - 'a';
        count[tempVal]++;
    }
    int maxi = -1;
    int ans;
    for(int i = 0; i<26; i++){
        if(maxi < count[i]){
            maxi = count[i];
            ans = i;
        }
    }
    return ans + 'a';
}

int main(){
    char ch[] = "excellent";
    int size = sizeof(ch)/sizeof(char);
    char MaxOcc = maxOccurence(ch,size);
    cout << MaxOcc;


    return 0;
}