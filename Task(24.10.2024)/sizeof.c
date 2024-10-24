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
	int n = sizeof(union id);
	printf("\n Size of union id :%d",n);	
 	
 }

