#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define length 3
#define space 6
int main(){
	int hand_cards = NULL;
	char input[length][space];
	int i,n;
	printf("Welcome to blackjack game. Your input should be from two to ten and (Jack, Queen, King).\n");
	printf("Please consider that only strings are accepted.\nFor numbers: You can write 'Three' if you have 3 on your hand\n");
	for(i = 0; i < length; i++)
	{
		if(i == 0){
			printf("Please input the name of the first card: ");
			gets(input[i]);
			toupper(input[i]);
		}else if(i == 1){
			printf("Input the name of the second card: ");
			gets(input[i]);
			toupper(input[i]);
	 	}else if(i == 2){
			printf("Input the name of the third card: ");
			gets(input[i]);
			toupper(input[i]);
		}
	}
	// Converting the letters to uppercase
	for(i = 0; i < length; i++)
	{
		for (n = 0; input[i][n] != '\0'; n++) 
		{
     		if(input[i][n] >= 'a' && input[i][n] <= 'z') {
        		input[i][n] = input[i][n] -32 ;
			}
		}
	}
	for(i = 0; i < length; i++)
	{
			if(strcmp(input[i], "TWO") == 0){
				hand_cards = hand_cards + 2;
			}else if(strcmp(input[i], "THREE") == 0){
				hand_cards = hand_cards + 3;
			}else if(strcmp(input[i], "FOUR") == 0){
				hand_cards = hand_cards + 4;
			}else if(strcmp(input[i], "FIVE") == 0){
				hand_cards = hand_cards + 5;
			}else if(strcmp(input[i], "SIX") == 0){
				hand_cards = hand_cards + 6;
			}else if(strcmp(input[i], "SEVEN") == 0){
				hand_cards = hand_cards + 7;
			}else if(strcmp(input[i], "EIGHT") == 0){
				hand_cards = hand_cards + 8;
			}else if(strcmp(input[i], "NINE") == 0){
				hand_cards = hand_cards + 9;
			}else if(strcmp(input[i], "JACK") == 0){
				hand_cards = hand_cards + 10;
			}else if(strcmp(input[i], "QUEEN") == 0){
				hand_cards = hand_cards + 10;
			}else if(strcmp(input[i], "KING") == 0){
				hand_cards = hand_cards + 10;
			}else if(strcmp(input[i], "ACE") == 0){
				hand_cards = hand_cards + 11;
			}
	}
	int aces=NULL;
	if(hand_cards > 21){
		for(i = 0; i < length; i++)
		{
			if((strcmp(input[i], "ACE") == 0 ) && (aces < 2) ){
				aces++;
				hand_cards = hand_cards - 10;
				if(hand_cards <= 21){
					hand_cards = hand_cards + 10;
				}
			}
			
		}
	} 
	printf("\nThe value of all of the cards is %d", hand_cards);
	printf("\n\n");
	printf("\nThe value of the first card is %s", input[0]);
	printf("\nThe value of the second card is %s", input[1]);
	printf("\nThe value of the third card is %s", input[2]);
	
}
