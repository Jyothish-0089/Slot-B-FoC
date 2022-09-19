#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum = sum + i*i*i;
        if(i<n){
            printf("%d%s",i*i*i,"+");
        }
        else{
            printf("%d%s%d",i*i*i,"=",sum);
        }
        i=i+1;
    }
return 0;
}
