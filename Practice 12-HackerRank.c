#include<stdio.h>
struct Student{
	int age;
	char firstName[51];
	char lastName[51];
	int standard;
};
int main(){
	struct Student s1;
	printf("Enter your age: ");
	scanf("%d", &s1.age);
	printf("Enter your First Name: ");
	scanf("%s", &s1.firstName);
	printf("Enter your Last Name: ");
	scanf("%s", &s1.lastName);
	printf("Enter your standard: ");
	scanf("%d", &s1.standard);
	printf("\n");
	printf(" %d \%s %s %d\n", s1.age,s1.firstName,s1.lastName,s1.standard);
	return 0;
}
