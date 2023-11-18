#include<iostream>
using namespace std;
int main(){

/*     int n;
    cout << "Enter no. to print pattern : " ;
    cin >> n;
    /*
    for(int i = 0; i < n; i++){
        for(int j = n; j > 0; j--){
            cout << j << " ";
        }
        cout << '\n';    
    }
    cout << '\n';   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << j+1 << " ";
        }
        cout << '\n';    
    } 
    cout << '\n';    
     */
/*     int l = 0;
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            l++;
            cout << l << " ";
            
        }
        cout << '\n';    
    }

 for(int i = 1; i <= n; i++){
    int val = i;
        for(int j = 1; j <= i; j++){
            cout << val << " ";
            val--;
        }

        cout << '\n';    
    }
    */
/*     // Even no. sum!!
    int n, sum = 0;
    cout << "Enter the no. : ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        if(i%2 == 0){
        sum = sum + i;   
        }
    }
    cout << "Sum: " << sum; */

    // Farenheit to Calcius.
    int F;
    cout << "Enter temp. in Farenheit: ";
    cin >> F;
    int C =(F - 32)* 5/9;
    cout << "Temp. in Calcius is: " << C;
    return 0;
    
}