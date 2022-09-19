#include <stdio.h>
int main()
{
    int n,i=1,n1,n2,n3;
    scanf("%d",&n);
    n1=0;
    n2=1;
    printf("%d%s%d%s",n1," ",n2," ");
    while(i<=n){
            n3=n2+n1;
            printf("%d%s",n3," ");
            n1=n2;
            n2=n3;
            i=i+1;
    }
return 0;
}
