#include<stdio.h>
int main()
{
    int row,col,n;
    scanf("%d",&n);
    for(row=n;row>=1;row++)
    {
        //printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        //printing number
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}