#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int row=1;row<=n;row++) 
    {

        // print space
        for(int space=1;space <= n-row;space++)
        {
            printf(" ");
        }

        // print star
        for(int star=1;star<=row;star++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}