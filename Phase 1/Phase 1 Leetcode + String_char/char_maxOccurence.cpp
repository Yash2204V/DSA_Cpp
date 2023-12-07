#include<iostream>
using namespace std;

char maxOccurence(char ch[]){
    int temp[27] = {0};
    int index = 0;
    for(int i = 0; ch[i] != '\0'; i++){
        index = ch[i] - 'a';
        temp[index] ++;
    }
    for(int i = 0; i<27;i++){
        cout << temp[i] << " ";
    }
    cout << endl;
    int maxi = -1, ans = 0;
    for(int i = 0; i<27;i++){
        if(maxi < temp[i]){
            maxi = temp[i];
            ans = i;
        }
    }

    return ans + 'a';
}
int main(){
    char ch[30] = "ballu";
    cout << maxOccurence(ch);

    
    return 0;
}