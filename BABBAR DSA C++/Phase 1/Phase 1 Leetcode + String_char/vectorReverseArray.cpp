#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i = 0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
}

vector<int> ReverseArray(vector<int> v){
    int i = 0;
    int j = v.size() - 1;
    while(i<=j){
        swap(v[i++],v[j--]);
    }
    return v;
}


int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(1);
    print(arr);
    vector<int> ans = ReverseArray(arr);
    cout << "Reverse Array" << endl;
    print(ans);
    return 0;
}