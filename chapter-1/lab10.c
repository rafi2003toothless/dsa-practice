#include<stdio.h>
#include<math.h>
 int main()
{
    float x,y;
int n;
printf("enter x : ");
scanf("%f",&x);
printf("enter n : ");
scanf("%d",&n);
y=pow(x,n);
printf("x^n: %.1f\n",y);
return 0;

}