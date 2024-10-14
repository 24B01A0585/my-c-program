#include <stdio.h>
void main()
{
 float a,b;
 int c;
 printf("enter the number\n 1 for conversion from celsius to fahrenheit\n 2 for conversion from fahrenheit  to celsius");
 scanf("%d",&c);
 if(c==1)
 {
  printf("\n enter the Temperature");
  scanf("%f",&a);
  b=(a*(9/5.0))+32;
  printf("\n the of given temperature celsius in fahreheit is %f",b);
 }
 else
 {
    if(c==2)
 {
 printf("\n enter the Temperature");
 scanf("%f",&b);
 a=(b-32)*(5/9.0);
 printf("\n the of given temperature fahreheit in celsius is %f",a);
}
else
{
    printf("\n invalid data");
}
 }
}
