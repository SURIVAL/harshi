#include <stdio.h>

int main(void) 
{
int i,j,rem,gcd;
printf("\n enter the first number:");
scanf("%d",&i);
printf("\n enter the second number:");
scanf("%d",&j);
  do
{
rem=i%j;
if(rem==0)
break;
i=j;
j=rem;
}  while(rem!=0);
gcd=j;
printf("\n the gcd of the given number is: %d",gcd);
return 0;
}
