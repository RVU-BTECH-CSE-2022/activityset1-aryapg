#include<stdio.h>

void inputl(int *n)
{
  printf("Enter the length of array:\n");
  scanf("%d",n);
}
 void inputele(int n,int a[n])
{
   for(int i=0; i<n; i++)
  {
    printf("Enter %d element: ",i+1);
    scanf("%d",&a[i]);
  }  
}

void compute(int n,int a[n],int *sum)
{
  *sum=0;
  for(int i=0;i<n;i++)
    {
    *sum=*sum+a[i];
    }
}
void output(int n,int a[n],int sum)
{
  int i;
   for(i=0;i<n-1;i++)
    {
      printf("%d+",a[i]);
    }
  printf("%d= %d\n",a[i],sum);
}
int main()
{
  int n;
  inputl(&n);
  int a[n];
  inputele(n,a);
  int sum;
  compute(n,a,&sum);
  output(n,a,sum);
  return 0;
}