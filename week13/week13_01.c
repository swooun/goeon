#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	struct student s = {0, '0', 0};
	
	printf("input the ID: ");
	scanf("%d", &s.ID);
	
	printf("input the name: ");
	scanf("%s", s.name);
	
	printf("input the grade: ");
	scanf("%lf", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);

}
