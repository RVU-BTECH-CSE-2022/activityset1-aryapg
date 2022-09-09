#include<stdio.h>
int main()
{
  int ch;
  printf("Press 1 if male\n");
  printf("Press 2 if female\n");
  scanf("%d",&ch);

  switch(ch)
    {
      case 1:
        {
          int age;
          int m;
          printf("YOU HAVE PRESSED 1\n");
          printf("PLEASE ENTER YOUR AGE:");
          scanf("%d",&age);
          if(age<21)
          {
            printf("THE DRIVER IS NOT INSURED");
            break;
          }
          
          printf("ARE YOU MARRIED IF YES PRESS '1' ELSE '0':");
          scanf("%d",&m);
if(m==1&&age>=21)
{
 printf("THE DRIVER IS INSURED");
 }
else if(m==0&&age>=30)
{
printf("THE DRIVER IS INSURED");
}
else
{
  printf("THE DRIVER IS NOT INSURED");
}
break;
}
  case 2:
        {
          int age1;
          int n;
          printf("YOU HAVE PRESSED 2\n");
          printf("PLEASE ENTER YOUR AGE:");
          scanf("%d",&age1);
          if(age1<18)
          {
            printf("THE DRIVER IS NOT INSURED");
            break;
          }
          printf("ARE YOU MARRIED IF YES PRESS '1' ELSE '0':");
          scanf("%d",&n);
          if(n==1)
          {
            printf("THE DRIVER IS INSURED");
          }
          

          else if(n==0&&age1>=25)
          
            {
              printf("THE DRIVER IS INSURED");
            }
            else
            {
              printf("THE DRIVER IS NOT INSURED");
            }
            break;
          }
        default:
          printf("INVALID");
        }
      }