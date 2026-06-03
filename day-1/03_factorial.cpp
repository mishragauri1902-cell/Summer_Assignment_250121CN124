#include<stdio.h>
   int factorial(int n){
    if(n<=1){
        return 1;
    }
    return (n*factorial(n-1));
   }
   int main(){
    int n;
    printf("enter a positive integer");
    scanf("%d",&n);
    if(n==1 && n==0){
        printf("innvalid input");
        return 1;
    }
    if(n<0){
        printf("factorial of negative number does not exist");
    }else{
        printf("factorial is %d",n,factorial(n));
    }
    return 0;
   }
