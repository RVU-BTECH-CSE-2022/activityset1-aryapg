#include<stdio.h>
int input()
{
  int a;
printf("Enter the numbers");
scanf("%d",&a);
return a;
  }

int compare(int a,int b,int c)
{
int d;
if(a>b)
{
  if(a>c)
  {
    d=a;
  }
  }

else if(b>a)
  {
    if(b>c)
    {
     d=b;
    }
  }

else
{
    d=c;  
}
return d;
  }

 int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  printf("The largest is %d",d);
  return 0;
  }