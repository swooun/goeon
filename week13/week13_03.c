#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM];
	int i;
	float sum = 0;
	int hscore = -1;
	int hID;
	float avg;
	
	for (i=0;i<STUDENTNUM;i++){
		printf("input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
		
	    sum += s[i].score;
		if (s[i].score > hscore){
			hscore = s[i].score;
			hID = s[i].ID;
		}
    }
    
	avg = sum / STUDENTNUM;
	
	printf("The average of the score: %f\n", avg);
	printf("The highest score - ID: %d, score: %d", hID, hscore);
}
