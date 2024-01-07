#include<iostream>
using namespace std;

bool permutationString(string s1, string s2){
    int count[26] = {0};
    int indexSum = 0;
    
    for(int i = 0; i<s1.size(); i++){
        int index = s1[i] - 'a';
        count[index]++;
    }
    for(int i = 0; i<26; i++){
        if(count[i] != 0){
            indexSum = indexSum + i;
        }
    }

    for(int i = 0; i<s2.size()-1; i++){
        int el1 = s2[i] - 'a';
        int el2 = s2[i+1] - 'a';
        if(el1 + el2 == indexSum){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "haiefciacbudiufb";
    if(permutationString(s1,s2)){
        cout << "It exists";
    }
    else{
        cout << "It doesn't exists";
    }
    return 0;
}