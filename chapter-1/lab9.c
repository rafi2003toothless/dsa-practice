#include <stdio.h>
int main()
{
    float x1,y1,x2,y2,d;
    printf("enter x1 : \n");
    scanf("%f",&x1);
    printf("enter y1 : \n");
    scanf("%f",&y1);
    printf("enter x2 : \n");
    scanf("%f",&x2);
    printf("enter y2 : \n");
    scanf("%f",&y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the coordinate distance is : %.3f\n",d);
    return 0;
}