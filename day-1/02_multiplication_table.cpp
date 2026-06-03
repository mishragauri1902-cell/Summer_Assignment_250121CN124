#include<stdio.h>
int main(){
    int num,sum;
    printf("enter an integer");
    scanf("%d",sum);
    printf("multiplication table for %d",num);
    for(int i=1;i <=10;++i){
        printf("%d x %d=%d",num,i,num*i);
    }
    return 0;
}