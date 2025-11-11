#include <stdio.h>
int main()
{
	int average;
	int score;
	int score2;
	int students_number;
	printf("enter the score/n");
	scanf("%d",&score);
	printf("enter the student_number/n");
	scanf("%d",&students_number);
	if(score<40)
		printf("the student has:%d",score+2);
	else if (score>41 &score2>20)
		printf("he has:%d",score-5);
	else if(score>60 &score2>40)
		printf("he has:%d",score2-7);
	score2=score-2;
	average=score+score2/2;
	printf("the average is:%d",average);
	
	
	return 0;


}