#include <stdio.h>

int main()
{
    int n,hex,i=0,c=1;
    int arr[50];
    printf("%s","Enter a decimal number: ");
    scanf("%d",&n);
    printf("%s","The octal value is: ");
    while(n>7){
        arr[i]= n%8;
        n=n/8;
        i++;
        c++;
    }
    i=c;
    printf("%d",n);
    while(i>=0){
        if(arr[i]<10){
            printf("%d",arr[i]);
        }
        i--;
    }
   
    return 0;
}
