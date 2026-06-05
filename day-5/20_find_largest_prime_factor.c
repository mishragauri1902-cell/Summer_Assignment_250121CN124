#include<stdio.h>
void primefactor(int n);
int main(){
    int n = 10;
    printf("the prime factor of primefactor(n)");
    return 0;
}
void primefactor(int n){
    int i;
    for(i=2;i<=n;i++){
        while( n % i == 0){
            printf("%d",i);
        n /= i;
        }
   }
}