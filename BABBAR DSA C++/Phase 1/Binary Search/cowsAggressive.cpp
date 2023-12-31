#include<iostream>
using namespace std;

bool isPossible(int stalls[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

void sort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    cout << endl;
}

int aggressiveCows(int stalls[], int n, int k)
{
    sort(stalls,n);
   	int s = 0;
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5] = {4,2,1,3,5};
    int stall = aggressiveCows(arr,5,2);
    cout << stall << endl;
    return 0;
}



/* #include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    cout << endl;
}

int cowsAggressive(int arr[], int size){
    sort(arr[0],size);
        
}
int main(){
    int arr[5] = {4,2,1,3,5};


    return 0;
}    */