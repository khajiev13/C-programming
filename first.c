#include <stdio.h>
#include <string.h> 
#define arrNum 15

struct Student
{
	char name[arrNum];
	char currentDate[arrNum];
	char birthday[arrNum];
	char location[arrNum];
	char idNumber[arrNum];
};

int main() {
	// struct initialization
	struct Student stinfo;
	
	//Store the info to variables 
	printf("I'm going to create a doc file. Please input your name: ");
	gets(stinfo.name);
	printf("Now, what's the date today? Input with backslashes for example(2020/03/12) \n");
	gets(stinfo.currentDate);
	printf("Where are you now? \n");
	gets(stinfo.location);
	printf("What's your student ID: \n");
	gets(stinfo.idNumber);
	printf("Enter your birthday: (2000/10/04) ");
	gets(stinfo.birthday);
	
	//Creating a file
	FILE *point = fopen("urstid.doc", "w");
	// Writing the file based on the variables
	fprintf(point,"Name: ");
	fputs(stinfo.name, point);
	fprintf(point, "\nCurrent date is: " );
	fputs(stinfo.currentDate, point);
	fprintf(point,"\nBirthday: ");
	fputs(stinfo.birthday, point);
	fprintf(point, "\nLocation: ");
	fputs(stinfo.location, point);
	fprintf(point, "\nID number: ");
	fputs(stinfo.idNumber, point);

	//Closing the file 
	fclose(point);
		
}
