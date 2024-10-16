#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return a+b;
}

int square(int n)
{
	return n*n;
}

int get_max(int x, int y)
{
	if(x<y)
	  return y;
	else
	  return x;
}

int main(int argc, char *argv[]) {
	int m, n, max, squa, sum;
	printf("Enter the integers: ");
	scanf("%i %i", &m, &n);
	
	sum=sumTwo(m, n);
	squa=square(m);
	max=get_max(m, n);

	printf("Result - Sum: %i, Square: %i, Max: %i", sum, squa, max);
	return 0;
}
