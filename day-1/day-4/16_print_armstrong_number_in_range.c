#include<stdio.h>
#include<math.h>
int main(){
    int max,min,n,r,sum,armstrong,i;
    printf("enter min and max value");
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++){
        n=i;
        armstrong=n;
        while(n!=0){
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
    }
        if(sum==armstrong){
            printf("%d\n",sum);
        }
        return 0;
    }
    
    
        

        
