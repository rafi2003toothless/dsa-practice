#include<stdio.h>
int main()
{
    char character;
    printf("enter a character : ");
    scanf("%c",&character);
    printf("ASCII value for the vharacter %c is %d\n",character,(int)character);
    return 0;
}