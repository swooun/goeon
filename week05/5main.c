#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i1, i2;
	int a, b, c, d, e;
	
	printf("Input two integers: ");
	scanf("%i %i", &i1, &i2);
	
	a = i1&i2;
	b = i1|i2;
	c = i1^i2;
	d = i1<<1;
	e = i1>>1;
	
	printf("& result is %i \n", a);
	printf("| result is %i \n", b);
	printf("^ result is %i \n", c);
	printf("<< result is %i \n", d);
	printf(">> result is %i \n", e);
	
	
	return 0;
}
