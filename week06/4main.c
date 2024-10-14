#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_i;
	int sum=0;
	int i;
	
	printf("Enter a number: ");
	scanf("%i", &input_i);
	
	for(i=1; i<=input_i; i++)
	   sum += i;
	   
	printf("The result is %i", sum);
	
	return 0;
}
