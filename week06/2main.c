#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_i;
	
	printf("Enter an integer: ");
	scanf("%i", &input_i);
	
	if(input_i<0)
	  printf("%i", -input_i);
	else
	  printf("%i", input_i);	
	
	return 0;
}
