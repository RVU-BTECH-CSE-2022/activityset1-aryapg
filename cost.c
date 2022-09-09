#include<stdio.h>
int main()
{
  float cp,sp;
  printf("Enter the Cost Price:");
  scanf("%f",&cp);
  printf("Enter the Selling Price:");
  scanf("%f",&sp);

  float profit=sp-cp;
  float loss=cp-sp;

  if(sp>cp)
  {
    printf("The company has incurred profits\n");
    float profit_percent=profit/cp*100;
    printf("%f percent profits",profit_percent);
  }
  else
  {
    printf("The company has incurred loss\n");
    float loss_percent=loss/cp*100;
    printf("%f percent loss",loss_percent);
  }
  return 0;
}