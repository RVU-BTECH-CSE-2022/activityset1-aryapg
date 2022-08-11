#include <stdio.h>
  int main()
{
  int n;
  int arr[1000];
  int sum=0;

  printf("Enter the size of the array");
    scanf("%d",&n);

  printf("Enter the elements in arrays");
  for(int i=0;i<=n;i++)
    {
      scanf("%d",&arr[i]);
    }
  
  for(int i=0;i<=n;i++)
    {
      sum=sum+arr[i];
    }
  printf("The sum of the arrays %d",sum);
  return 0;
  }