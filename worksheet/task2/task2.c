/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Ethan West
 * ID: 201990893
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> //for toupper

int main(void){
	long decimal=0;
	char hex[9];
	int digit=0;

	printf("Enter a hexadecimal:");
	scanf(" %s",hex);


	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	for (int i=0;i<strlen(hex);i++){
		if (toupper(hex[i])=='A'){ //converts letters to respective numbers
			digit=10;
		} else if (toupper(hex[i])=='B'){
			digit=11;
		} else if (toupper(hex[i])=='C'){
			digit=12;
		} else if (toupper(hex[i])=='D'){
			digit=13;
		} else if (toupper(hex[i])=='E'){
			digit=14;
		} else if (toupper(hex[i])=='F'){
			digit=15;
		} else if (hex[i] >= '0' && hex[i]<='9'){
			digit=hex[i] - '0';
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		decimal = decimal * 16 + digit;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}
//possible hex
//0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F