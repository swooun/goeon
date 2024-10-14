#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_i;
	
	printf("Enter an integer: ");
	scanf("%i", &input_i);
	
	if(input_i>0)
	  printf("This is positive number.");
	else if(input_i<0)
	  printf("This is negative number.");
	else
	  printf("This is 0.");
	 
	
	return 0;
}
