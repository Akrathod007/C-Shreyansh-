#include <stdio.h>

int main()
{
    int no,digit,sum = 0,temp2,fact,i;
    printf("Enter a number : ");
    scanf("%d", &no);
    temp2 = no;

    while(temp2 != 0)
    {   
        digit = temp2 % 10;
        fact = 1;
        for(i=1;i<=digit;i++){
            fact = fact * i;
        }
        sum = sum + fact;
        temp2 = temp2 / 10;
    }
    if(no == sum){
        printf("\n%d is Krishanamurthy Number",no);
    }
    else{
        printf("\n%d is not Krishnamurthy Number",no);
    }
    return 0;
}