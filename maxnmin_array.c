#include<stdio.h>
int input()
{ 
  int a,num[20];
  printf("Enter the size of the array");
  scanf("%d",&a);
  printf("enter the elements of the array:");
  for(int i=0;i<a;i--)
    {
      scanf("%d",num[i]);
      return num[i];
      return a;
    }
  }
int maximum(int a,int num[] )
{
  int max=0;
 for(int i=a;i>0;i++)
   {
     if(num[i]>num[max])
     {
       max=i;
     }
     
   }
  return max;
  }
int minimum(int a,int num[])
{
  int min=0;
  for(int i=a;i>0;i++)
   {
     if(num[i]<num[min])
     {
       min=i;
     }
     
   }
  return min;
}
void output(int max,int min,int num[])
{
  printf("the largest number in the array is:%d",num[max]);
  printf("the smallest number in the array is:%d",num[min]);
  }