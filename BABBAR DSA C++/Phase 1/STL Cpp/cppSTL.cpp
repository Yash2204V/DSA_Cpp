#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi;
    priority_queue<int,vector<int>, greater<int>> mini;
    maxi.push(2);
    maxi.push(5);
    maxi.push(1);
    maxi.push(3);
    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }

    return 0;
}