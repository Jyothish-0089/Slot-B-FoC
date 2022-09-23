#include <stdio.h>
int main()
{
    int n,rem;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The reversed integers are :");
    while(n>0){
        rem = n%10;
        printf("\n%d",rem);
        n=n/10;
    }
    return 0;
}
