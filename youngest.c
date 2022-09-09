#include<stdio.h>
int main()
{
  int age1,age2,age3;
  printf("enter the age of ram:");
  scanf("%d",&age1);
   printf("enter the age of shyam:");
  scanf("%d",&age2);
   printf("enter the age of ajay:");
  scanf("%d",&age3);
  if(age1<age2 && age1<age3)
  {
    printf("ram is youngest");
  }
  else if(age2<age1 && age2<age3)
  {
    printf("shyam is youngest");
  }
  else 
  {
    printf("ajay is youngest ");
  }
  return 0;
}