#include<stdio.h>
int fibonacci(int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int t1=0,t2=1,nextTerm=0;
    for (int i=2;i<=n;i++){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return t2;
}
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("the nth fibonacci term is:%d",n,fibonacci(n));
    return 0;
}