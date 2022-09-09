#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  float sum;
  printf("enter the value for sub1:");
  scanf("%d",&sub1);
  printf("enter the value for sub2:");
  scanf("%d",&sub2);
  printf("enter the value for sub3:");
  scanf("%d",&sub3);
  printf("enter the value for sub4:");
  scanf("%d",&sub4);
  printf("enter the value for sub5:");
  scanf("%d",&sub5);
   sum=sub1+sub2+sub3+sub4+sub5;
  scanf("the sum is:",&sum);
  if(sum>60)
  {
    printf("first division\n");
  }
  else if(sum>=40 && sum<=60)
  {
    printf("second division\n");
  }
  else if(sum<40)
    {
    printf("fail\n");
    }
  return 0;
}