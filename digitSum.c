#include <stdio.h>

int main() {
    int no,sum = 0,mul = 1,digit;
    printf("Enter a number : ");
    scanf("%d",&no);

    while(no != 0){
        digit = no % 10;
        sum = sum + digit;
        mul = mul * digit;
        no = no / 10;//1234 / 10 -> 123
    }

    printf("\nDigit Sum is %d",sum);
    printf("\nDigit Mul is %d",mul);
    return 0;
}