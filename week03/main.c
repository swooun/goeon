#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float input_f1;
	float input_f2;
	float f3;
	
	printf("enter two integers: ");
	scanf("%f, %f", &input_f1, &input_f2);
	
	f3 = input_f1 / input_f2;
	
	printf("%f / %f = %f", input_f1, input_f2, f3);
	
	return 0;
}
