//Question number-3
//Date:5/11/2024

#include<stdio.h>
union student
{
	char grade;
	int student_id;
	float cgpa;
};
main()
{
	union student data;
    printf("Enter the grade of the student: \n");
    scanf("%c",&data.grade);
    printf("Grade: %c \n ", data.grade);
    
    printf("Enter the ID of the student: \n");
    scanf("%d",&data.student_id);
    printf("ID: %d \n", data.student_id);
       
    printf("Enter the CGPA of the student: \n");
    scanf("%f",&data.cgpa);
    printf("CGPA: %f \n", data.cgpa);
	
}
