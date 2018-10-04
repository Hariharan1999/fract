/*Write a function to input a fraction.*/
#include<stdio.h>
float func(float n,float d)
{
 float frac=n/d;
return frac;
}
void main()
{
  float num,denom;
  float a;
  printf("enter the numerator\n");
  scanf("%f",&num);
  printf("enter the denominator\n");
  scanf("%f",&denom);
  a=func(num,denom);
  printf("%f / %f=%f",num,denom,a);
}
