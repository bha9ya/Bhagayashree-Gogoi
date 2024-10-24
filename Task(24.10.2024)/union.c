#include<stdio.h>
union id{
	char name[12];
	float price;
};
 main()
 {
 	union id s;
 	printf("Name:");
 	scanf("%s",s.name);
 	printf("Price:");
 	scanf("%f",&s.price);
 	printf("%s",s.name);
 	printf("%f",s.price);	
 	
 }
