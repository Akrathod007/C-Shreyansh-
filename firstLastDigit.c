#include <stdio.h>

int main()
{
    int no, fd, ld;
    printf("Enter a number : ");
    scanf("%d", &no);
    ld = no % 10;
    while (no != 0)
    {
        fd = no % 10;
        no = no / 10;
    }

    printf("\nFirst Digit : %d", fd);
    printf("\nLast Digit : %d", ld);

    printf("\n%d + %d = %d",fd,ld,fd + ld);
    printf("\n%d * %d = %d",fd,ld,fd * ld);


    return 0;
}