#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_sec, sec, min;
	
	printf("Inpit the second: ");
	scanf("%i", &input_sec);
	
	sec = input_sec%60;
	min = input_sec/60;
	
	printf("The time is %i : %i\n", min, sec);
	
	return 0;
}
