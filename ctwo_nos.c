#include<stdio.h>
int input()
{ 
  int a;
  printf("Enter the numbers");
  scanf("%d",&a);

return a;
  }
int compare(int a,int b)
{
int c;
if(a==b)
{
  c=a;
}
else if(a<b)
{
  c=b;
}
else
{
  c=a;
}
return c;
  }
void output(c)
{
  printf("The largest is %d",c);
}
 int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=compare(a,b);
  output(c);
  }