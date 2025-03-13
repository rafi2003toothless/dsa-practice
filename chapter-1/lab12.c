#include<stdio.h>
int main()
{
    float lenght,width,perimeter;
    printf("enter the lenght of the rectangle: ");
    scanf("%f",&lenght);
    printf("enter the width of rectengle: ");
    scanf("%f",&width);
    perimeter = 2 * (lenght+width);
    printf("perimeter of the rectengle is %.2f\n",perimeter);
    return 0;

}