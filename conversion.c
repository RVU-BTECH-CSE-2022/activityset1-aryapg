#include<stdio.h>
int main()
{
  int ch;
  float celsius,fahrenheit;
printf("Press 1 to convert Cel to Fah\n");
printf("Press 2 to convert Fah to Cel\n");
scanf("%d",&ch);
switch(ch)
{
  case 1:
    {
      printf("Enter celsius");
      scanf("%f",&celsius);
      //°F = (°C × 9/5) + 32
      fahrenheit=(celsius*9/5)+32;
      printf("Fahrenheit is %f",fahrenheit);
    }
  break;
  
  case 2:
    {
      printf("Enter fahrenheit");
      scanf("%f",&fahrenheit);
      //°C = (°F − 32) x 5/9
      celsius=(fahrenheit-32)*5/9;
      printf("Celsius is %f",celsius);
    }
  break;

}
}