#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter an integer");
    scanf("%d",&num);
    int temp=num;
    do{
        temp /= 10;
        count++;
    }while(temp!=0);
    printf("the number of digits is %d",num,count);
    return 0;
}