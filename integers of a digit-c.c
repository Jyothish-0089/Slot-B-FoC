#include <stdio.h>
int main()
{
    int n,i=0,rem;
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
        printf("\n%d",list[i]);
        i--;
    }
}