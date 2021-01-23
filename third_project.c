#include <stdio.h>
#include <stdlib.h>

void date(int ,int *,int *, int *);
int main(){
	int month, day, year;
	date(20210116, &day, &month, &year);
	
	//Printing the variables
	printf("The year is %d\n", year);
	printf("The day is %d\n", day);
	printf("The month is %d\n", month);
}

void date(int input, int *day, int *month, int *year){
	
	//Declare new char variables to get specific numbers from the input
	char day1[2];
	char month1[2];
	char year1[4];
	
	//Converting the input to string (char array) which helps us to get numbers 
	char strinput[10];
	sprintf(strinput, "%d", input);
	
	//Getting the numbers from the input and initializing it to the targeted variable
	int i;
	for(i = 0; i < 10; i++)
	{
		switch(i){
			case 0: 
				year1[0] = strinput[i];
				break;
			case 1:
				year1[1] = strinput[i];
				break;
			case 2:
				year1[2] = strinput[i];
				break;
			case 3:
				year1[3] = strinput[i];
				break;
			case 4:
					month1[0] = strinput[i];
					break;
			case 5:
				month1[1]= strinput[i];
				break;
			case 6:
				day1[0] = strinput[i];
				break;
			case 7: 
				day1[1] = strinput[i];
				break;
			default: break;
		}
	}
	//Converting the variables back to integer and returning the values by address
	*day = atoi(day1);
	*month = atoi(month1);
	*year = atoi(year1);
	
	
}
