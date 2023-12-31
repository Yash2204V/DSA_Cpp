#include<iostream>
#include<vector>
using namespace std;


bool permutationString(string s1, string s2){
    int sumChar = 0, sumIndex = 0;
    vector<int> count;

    for(int i = 0; i<s1.size(); i++){
        count.push_back(int(s1[i] - 'a'));
    }

    for(int i = 0; i<count.size(); i++){
        if(count[i] != 0){
            sumChar = ;
            sumIndex+=i;
        }
    }
    cout << sumChar << " " << sumIndex << endl;
    for(int i = 0; i < s2.size()-1; i++){
        int val = s2[i] + s2[i+1] - 'a' - 'a';
        if(val == sumChar){
            return true;
        }
     }

    return false;

}

int main(){
    string s1 = "ab";
    string s2 = "eidbaf";
/*     vector<int> bantu = permutationString(s1,s2);
    for(int i: bantu){
        cout << i << " ";
    } */
    if(permutationString(s1,s2)){
        cout << "Exist";
    }
    else{
        cout << "Not Exist";
    }
    return 0;
}