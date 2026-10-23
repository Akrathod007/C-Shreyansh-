#include <stdio.h>

int main() {
    int no,dc = 0;
    printf("Enter a number : ");
    scanf("%d",&no);

    while(no != 0){
        dc++;
        no = no / 10;//1234 / 10 -> 123
    }

    printf("Digit Count is %d",dc);
    return 0;
}