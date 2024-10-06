#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_year;
	int leap_year;
	
	printf("Input the year: ");
	scanf("%i", &input_year);
	
	leap_year = (input_year%4==0 && input_year%100!=0) || (input_year%400==0);
	
	printf("Is the year %i the leap year? %i", input_year, leap_year);
	return 0;
}
