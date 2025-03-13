#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;
    printf("enter the side : ");
    scanf("%f",&side);
    area = (sqrt(3) / 4) * pow(side, 2);
    printf("area is %.2f\n",area);
    return 0;
}