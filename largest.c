/*Assignment 2: Find the Largest of Three Numbers Using a Function*/


#include<stdio.h>
int maximum (int x,int y)
{
int z;
z= (x>=y) ? x:y;
return(z);

}
main()
{
int a,b,c,d;
printf("\n a =");
scanf("%d",&a);
printf("\n b=");
scanf("%d",&b);
printf("\n c=");
scanf("%d",&c);
d=maximum (a,b);
printf("\n Maximum=%d", maximum(c,d));
}