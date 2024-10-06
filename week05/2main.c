#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_i1, input_i2;
	int a, b, c, d, e;
	
	printf("Input two integers: ");
	scanf("%i%i", &input_i1, &input_i2);
	
	a = input_i1+input_i2;
	b = input_i1-input_i2;
	c = input_i1*input_i2;
	d = input_i1/input_i2;
	e = input_i1%input_i2;
	
	printf("+ result is %i\n", a);
	printf("- result is %i\n", b);
	printf("* result is %i\n", c);
	printf("/ result is %i\n", d);
	printf("%% result is %i\n", e);
	
	return 0;
}
