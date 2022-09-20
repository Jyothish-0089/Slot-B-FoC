#include <stdio.h>

int main()
{
    int n,hex;
    printf("%s","Enter a decimal number: ");
    scanf("%d",&n);
    printf("%s","The hexadecimal value is: ");
    while(n>15){
       hex = n%16; 
        if(hex==10){
               printf("%s","A");
        }
        if(hex==11){
               printf("%s","B");
        }
        if(hex==12){
               printf("%s","C");
        }
        if(hex==13){
               printf("%s","D");
        }
        if(hex==14){
               printf("%s","E");
        }
         if(hex==15){
               printf("%s","F");
        }
       else{
        printf("%d",hex);
       }
       n=n/16; 
       if(n<16){
           printf("%d",n);
       }
    }
    return 0;
}
