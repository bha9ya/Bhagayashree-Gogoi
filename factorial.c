/*Assignment 3*/
/*Date -26/9/2024*/

#include<stdio.h>
long int factorial(int n)
{
int i;
long int prod=1;
if(n>1)
for(i=2;i<=n;++i)
prod*=i;
return (prod);
}
main()
{
int n;
printf("\nn =");
scanf("%d",&n);
printf("\nn! =%1d",factorial(n));
}
