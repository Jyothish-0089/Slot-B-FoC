#include <stdio.h>
int main()
{
    int n,r,i=1,sum=0,avg;
    printf("Enter the range of numbers :");
    scanf("%d",&r);
    while(i<=r){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    i--;
    avg = sum/i;
    printf("\n%s%d","The average is :", avg);
    return 0;
}