#include<iostream>
#include<vector>
using namespace std;

bool IsPrime(int n){
    // n = 5
    int count = 0;
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i < n; i++){ 
        if( n%i == 0 ){ 
            count ++;
        }
    }
    if(count >= 1){
        return 0;
    }
    return 1;
}

// Optimized Code for bigger values
int SieveOfEratosthenes(int n){
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i<n; i++){
        if(prime[i]){
            count++;
            for(int j = 2*i; j < n; j+=i){
                prime[j] = false;
            }
        }
    }
    return count;
}



int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n; 
    int ans = SieveOfEratosthenes(n);
    cout << ans;
    return 0;
}