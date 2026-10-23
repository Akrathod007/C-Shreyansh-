#include <stdio.h>

int main()
{
    int no,digit,sum = 0,dc = 0,temp,temp2,pow,i;
    printf("Enter a number : ");
    scanf("%d", &no);
    temp = no;
    temp2 = no;
    // Digit Count

    while(temp != 0){
        dc++;
        temp = temp / 10;
    }

    printf("Digit Count is %d\n",dc);

    while(temp2 != 0)
    {   
        digit = temp2 % 10;
        pow = 1;

        for(i=1;i<=dc;i++){
            pow = pow * digit;
        }
        sum = sum + pow;
        temp2 = temp2 / 10;
    }

    if(no == sum){
        printf("\n%d is Armstrong Number",no);
    }
    else{
        printf("\n%d is not Armstrong Number",no);
    }
    return 0;
}