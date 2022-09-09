#include<stdio.h>
int main()
{
 int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  //prime number is a number which is divisible by 1 and itself

if((n==2)||(n==3)||((n-1)%6==0)||((n+1)%6==0))
{
  printf("It is a prime number");
}
  else
  
{
  printf("It is not a prime number");
}
  return 0;
}