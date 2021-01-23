#include <stdio.h>


int main() {
	int i, j, number ;
	
	//Printing the top 2 lines(text and dashes)
	printf("--multiplication table------");
	printf("\n 1  2  3  4  5  6  7  8  9\n");
	for(i = 1; i < 29; i++)
	{
		printf("-");
		if(i == 28){
			printf("\n");
		}
	}
	for(i = 1; i <= 9;i++)
	{
		for(j = 1; j <= 9;j++)
		{
			if(i > j)
			{
				printf("   ");
			} 
			else
			{
				number = i * j;
				printf("%2d ", number); 
			}
			
		}
		printf("\n");
	}
}
