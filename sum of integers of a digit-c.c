#include <stdio.h>
int main()
{
    int n,i=0,rem,sum=0;
    int list[1000];
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        list[i]=rem;
        i++;
        n=n/10;
    }
    i--;
    while(i!=-1){
        sum=sum+list[i];
        if(i==0){
            printf("%d%s%d",list[i]," = ",sum);
        }
        else{
            printf("%d%s",list[i],"+");
        }
        i--;
    }
}