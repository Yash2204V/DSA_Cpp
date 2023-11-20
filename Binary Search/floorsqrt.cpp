#include<iostream>
#include<math.h>
using namespace std;

int floorSqrt(int n){
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    int ans;
    while(start <= end){

        if(mid*mid > n){
            end = mid - 1;
        }
        else if(mid*mid < n){
            start = mid + 1;
            ans = mid;
        }
        else{
            if(mid*mid == n){
                return mid;
        }
            else{
                return mid - 1; 
        }
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
//                   79      3         8 ~ 8.888
int morePrecision(int n, int Prec, int tempAns){
    int ans = tempAns;

    for(int i = 1; i<Prec; i++){
        int factor = factor/10;
        for(int j = ans; ans*ans < n; j+= factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int answer = floorSqrt(79);
    int precise = morePrecision(79,3,answer);
    cout << "Precise solution: " <<  precise << endl;

    return 0;
}