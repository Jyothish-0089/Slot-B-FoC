#include <stdio.h>

int main()
{
    int n,hex,i=0,c=1;
    int arr[50];
    printf("%s","Enter a decimal number: ");
    scanf("%d",&n);
    printf("%s","The hexadecimal value is: ");
    while(n>15){
        arr[i]= n%16;
        n=n/16;
        i++;
        c++;
    }
    i=c;
    printf("%d",n);
    while(i>=0){
        if(arr[i]<10){
            printf("%d",arr[i]);
        }
        if(arr[i]==10){
            printf("%s","A");
        }
        if(arr[i]==11){
            printf("%s","B");
        }
        if(arr[i]==12){
            printf("%s","C");
        }
        if(arr[i]==13){
            printf("%s","D");
        }
        if(arr[i]==14){
            printf("%s","E");
        }
        if(arr[i]==15){
            printf("%s","F");
        }
        i--;
    }
   
    return 0;
}
