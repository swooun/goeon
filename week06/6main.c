#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int i;
	int num=0;
	
	do
	{
		num++;
		
		printf("Guess a number: ");
		scanf("%i", &i);
		
		if(answer<i)
		  printf("High!\n");
		else if(answer>i)
		  printf("Low!\n");
		else
		  printf("Congratulation! Trials: %i", num);
	}while(answer!=i);
	
	return 0;
}
