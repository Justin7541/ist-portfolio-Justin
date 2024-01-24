#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf ("What is your age: %i\n");
	scanf("%i", &age);

	printf ("What is your gpa:  %f\n");
	scanf("%f", &gpa);

	printf ("What is your grade:  %c\n");
	scanf (" %c", &grade);

	printf ("Here are your results: %i %f %c\n", age, gpa, grade);
       return 0;
}       

	
