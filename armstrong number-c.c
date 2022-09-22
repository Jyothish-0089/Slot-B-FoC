#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0,sum=0,temp,power,j;
    int list[50];
    printf("Enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n>0){
            list[i]=n%10;
            n=n/10;
            i++;
    }
    j=i-1;
    while(j>=0){
        power = pow(list[j],i);
        sum = sum + power;
        if(j==0){
            printf("%d%s%d%s",list[j],"^",i," = ");
        }
        else{
            printf("%d%s%d%s",list[j],"^",i," + ");
        }
        j--;
    }
    if(temp==sum){
        printf("%d",sum);
        printf("\n%s","YES!! It's an Armstrong number");
    }
    else{
        printf("%d",sum);
        printf("\n%s","No..It's not an Armstrong number..");
    }
    return 0;
}
