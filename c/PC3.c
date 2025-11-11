#include <stdio.h>
int main()
{
	int score;
	printf("Enter the value\n");
	scanf("%d",&score);
		switch(score)
	{
		case 1 ... 40:printf("Enter the value E");
		     break;
		 case 41 ... 49:printf("enter the value D");
		     break;
		 case 51 ... 59:printf("enter the value C");
		     break;
		 case 60 ... 69:printf("enter the value B");
		     break;
		 case 70 ... 100:printf("enter the value A");
		     break;
		 default:("invalid\n");
		 
		    
	}
	return 0;
}