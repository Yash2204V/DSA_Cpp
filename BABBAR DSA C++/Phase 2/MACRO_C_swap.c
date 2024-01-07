#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b) do{typeof(a) temp = (a); (a)=(b); (b)=temp;}while(0)
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    SWAP(a,b);
    printf("The value of a and b after swapping are: %d and %d",a,b);

    return 0;
}