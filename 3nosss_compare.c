#include<stdio.h>
int input()
{
 int x;
  printf("Enter the Number:");
  scanf("%d",&x);
  return x;
}

int find_largest (int x, int y, int z)
{
  int c;
  if (x>y) 
  {
    c=x;
  }  
  if(y>z)
 {
   c=y;
 }
  if (z>c)
 {
    c=z;
 }
  
  
  return c;
}
void output(int c)
{
 printf("The largest is %d",c);   
}
 int main()
{
  int x,y,z,c;
  x=input();
  y=input();
  z=input();
  c=find_largest(x,y,z);
  output(c);
}