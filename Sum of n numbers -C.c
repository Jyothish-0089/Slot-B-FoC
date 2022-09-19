#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum = sum + i;
        if(i<n){
            printf("%d%s",i,"+");
        }
        else{
            printf("%d%s%d",i,"=",sum);
        }
        i=i+1;
    }
return 0;
}
