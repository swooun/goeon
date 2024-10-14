#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i1, i2, num;
	char cal;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &i1, &cal, &i2);
	
	if(cal=='+')
		num=i1+i2;
    else if(cal=='-')
		num=i1-i2;
	else if(cal=='*')
		num=i1*i2;
	else
		num=i1/i2;
		
	printf("= %i", num);
	
	return 0;
}
