#include<iostream>
using namespace std;

int MaxMin(int arr[], int size){
    int max;
    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            if(arr[i]>arr[j]){
                max = arr[i];
            }
            else if(arr[i]<arr[j]){
                max = arr[j];
            }
        }
    }
    return max;
}
int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[100], max;
    cout << "Input of arraay containing " << size << " element: " << endl;
    for(int i = 0; i<size; i++){
        cout << "Enter the element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "The max element is: " << MaxMin(arr,size);
    
    
    }