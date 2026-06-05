#include<stdio.h>
int main(){
    int n,temp,rem,sum=0,i,fact;
        printf("enter a number");
        scanf("%d",&n);
        n=145;
        temp=n;
        while(n){
            i=1;
            fact=1;
            rem=n%10;
            while(i<=rem){
                fact*=i;
                i++;
            }
            sum=sum+fact;
            n=n/10;
        }
        if(sum==temp){
            printf("%d is a strong number");
        }else{
            printf("%d is not strong number");
        }
        return 0;
}