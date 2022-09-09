#include<stdio.h>
int main()
{
  float l,b,a,p;
  printf("enter the sides of the rectangle:");
  scanf("%f,%f",&a,&b);
  a=l*b;
  p=2*(a+b);
  if(a>p)
  {
    printf("area of the rectangle is greater than the perimeter:");
  }
  else
  {
    printf("area of the rectangle is not greater than the perimeter:");
  }
  return 0;
}