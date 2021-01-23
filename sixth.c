#include <stdio.h> 
#include <stdlib.h>
#define length 10000

int main() {
	double arr[length];
	int i,below50, above50;
	below50 = 0;
	above50 = 0;
	for(i = 0; i < length; i++) {
		arr[i] = rand() % 100;
		if(arr[i] <= 50.0)
		{
			below50++;
		}
		else
		{
			above50++;
		}
	}
	printf("The size of array is %d\n",length) ; 
	printf("The number of numbers  below and (including)50 is %d\n", below50);
	printf("The number of numbers above 50 is %d\n",above50);
} 


