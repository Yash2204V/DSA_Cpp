#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
    int count = 0;
    for(int i = 0; i<=2; i++){
        for(int j = 0; j<n; j++){
            if(a[j] == i){
                cout << i << " ";
                count++;
            }
        }
        
    } 
}

int main(){
    int a[6] = {2,0,1,0,2,2};
    sort012(a,6);
    
    return 0;
}