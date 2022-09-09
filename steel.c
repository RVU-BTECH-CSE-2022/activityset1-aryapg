#include<stdio.h>
int main()
{
  int hardness;
  float carbon_content;
  int tensile_strength;
  printf("Please enter hardness of the steel:");
  scanf("%d",&hardness);
  printf("Please enter carbon_content of the steel:");
  scanf("%f",&carbon_content);
  printf("Please enter tensile_strength of the steel:");
  scanf("%d",&tensile_strength);
if(hardness>50&&carbon_content<0.7&&tensile_strength>5600)
{
  printf("GRADE 10");
}
else if(hardness>50&&carbon_content<0.7)
  {
  printf("GRADE 9");
  }
else if(carbon_content<0.7&&tensile_strength>5600)
{
  printf("GRADE 8");
}
else if(hardness>50&&tensile_strength>5600)
{
  printf("GRADE 7");
}
else if(hardness>50||carbon_content<0.7||tensile_strength>5600)
{
  printf("GRADE 6");
}
else
{
  printf("GRADE 5");
}
}