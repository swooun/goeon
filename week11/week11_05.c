#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c1[50], c2[50], c3[50];
	
	printf("input a word: ");
	scanf("%s", c1);
	printf("input a word: ");
	scanf("%s", c2);
	printf("input a word: ");
	scanf("%s", c3);
	
	FILE *fp;
	fp = fopen("sample.txt", "w");
    
	fprintf(fp, "%s\n%s\n%s\n", c1, c2, c3);
	
	fclose(fp);
	
	return 0;
}
