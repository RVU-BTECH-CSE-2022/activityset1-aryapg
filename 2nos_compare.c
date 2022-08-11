#include<stdio.h>

float find_largest(int a,int b)
{
  char c;
  if(b>a)
  {
    c=b;
  }
  else{
    c=a;
  }
  return c;
}
int main()
{
  float a,b;
  printf("enter the two numbers:\n");
  scanf("%f%f",a,b);
  float c=find_largest(a,b);
  printf("the largest number among %f and %f is %f\n",a,b,c);
  return 0;
}