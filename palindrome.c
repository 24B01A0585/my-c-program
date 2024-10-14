#include <stdio.h>
void main()
{
int a,c=0,x,i;
printf("enter the requied number to be checked");
scanf("%d",&a);
for(i=a;i>0;i=i/10)
{
x=i%10;
c=(c*10)+x;
}
if(a==c)
{
printf("the given number is a palindrome");
}
else
{
printf("the given number not is a palindrome");
}
}
