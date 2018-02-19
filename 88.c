#include <stdio.h>
int main(void) 
{
int i,j,rem,lcm,gcd;
printf("\n enter the first number:");
scanf("%d",&i);
printf("\n enter the second number:");
scanf("%d",&j);
  do
{
rem=gcd%lcm;
if(gcd==0)
break;
i=j;
j=rem;
}  while(rem!=0);
gcd=j;
printf("\n the lcm of the given number is: %d",lcm);
return 0;
}
