#include<stdio.h>
int main(){
    int num;
    printf("enter a positive number");
    scanf("%d",&num);
    if(num !=1 || num <=0){
        printf("invalid positive integer");
        return 1;
    }
    printf("factor of %d are ;", num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d",i);
        }
    }
    return 0;

    }