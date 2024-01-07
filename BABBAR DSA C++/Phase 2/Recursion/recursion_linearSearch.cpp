#include<iostream>
using namespace std;



bool linearSearch(int arr[], int size, int key){

    if(size == 0)
        return false;
    if(arr[0] == key)
        return true;
    else{
        bool search = linearSearch(arr+1, size-1, key);
        return search;
    }
}

int main(){
    int arr[14] = {3,5,7,22,82,7,4,1,2,7,27,25,34,5};
    int size = 14;
    if(linearSearch(arr,size,4))
        cout << "It exists";
    else
        cout << "It doesn't exists";
    cout << endl;

    if(binarySearch(arr,0,size-1,4))
        cout << "It exists";
    else
        cout << "It doesn't exists";
    return 0;
}