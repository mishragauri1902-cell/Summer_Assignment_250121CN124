#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1; i<=num;i++){
        if(num%i){
            sum+=i;
        }
    }
    if(sum==num && num>0){
        printf("%d is a perfect number");
    }else{
        printf("%d is not a perfect number");
    }
    return 0;
}


