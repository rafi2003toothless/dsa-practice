#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area,circumference,diameter;
    printf("enter the radius of a circle: ");
    scanf("%f",&radius);
    area=M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;
    diameter= 2 * radius;
    printf("area of circle is %.2f\n",area);
    printf("circumference of the circle is %.2f\n",circumference);
    printf("diameter of the circle is %.2f\n",diameter);
    return 0;
}