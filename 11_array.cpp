// #include<iostream>
// #include<limits.h>

// using namespace std;

// void  printArray(int arr[], int size){
//     for(int i = 0; i<size; i++){
//         cout << arr[i] << " ";
//     }
// }

// int GetMax(int arr[],int size){
//     int maxR = INT_MIN;
//     for(int i = 0; i<size; i++){
//         maxR = max(maxR,arr[i]);
// /*         if(max < arr[i]){
//             max = arr[i];
//         } */
//     }
//     return maxR;
// }

// int GetMin(int arr[],int size){
//     int min = INT_MAX;
//     for(int i = 0; i<size; i++){
//         if(min > arr[i]){
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     int arr[100], max;
//     cout << "Input of array containing " << size << " element: " << endl;
//     for(int i = 0; i<size; i++){
//         cin >> arr[i];
//     }

//     cout << "The min no. is: " << GetMin(arr,size) << endl;
//     cout << "The max no. is: " << GetMax(arr,size) << endl;
//     printArray(arr,size);    
//     }

/* #include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
} */
