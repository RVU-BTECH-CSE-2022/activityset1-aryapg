#include<stdio.h>

float inputnum(char chr[])
{
  float m;
  printf("%s", chr);
  scanf("%f", &m);
  return m;
}

float find_largest (int x, int y, int z)
{
  float l; //Temp variable
  if (x>=y){ // first condition
    l = x;
  }
  if (x<y){ // else of 1st condition
    l = y;
  }
  // l is now assigned to the number which is largest between x and y 
  if (l<z){ // comparing greater number from x and y to z
    l = z;
  }
  return l;
}

float output(float x, float y, float z, float a)
{
  printf("The largest number among %f, %f and %f is %f\n",x,y,z,a);
  return 0;
}

int main(){
  float x,y,z;
  printf("Enter the three numbers:\n"); 
  x = inputnum("1st no:");
  y = inputnum("2nd no:");
  z = inputnum("3rd no:");
  float a = find_largest(x,y,z);
  output(x,y,z,a);
  return 0;
}
