// Worksheet 2.5

/* 
 * Task 3 - extension task
 * Implement a C program that demonstrates an input validation loop with the following requirements:
 * 1. Prompt the person to enter a password that must:
 *    a. Be at least 8 characters long
 *    b. Contain at least one uppercase letter
 *    c. Contain at least one number
 *    d. Contain at least one special character (!@#$%^&*)
 * 2.	Use an appropriate loop structure to continue prompting until a valid password is entered
 * 3.	After a successful password entry, ask if they want to validate another password (y/n)
 * 4.	Use an appropriate outer loop to continue the program until the person chooses to exit
 * This task requires combining nested loops with string processing and character checking.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 int main(void){
	 
	char input[100];
	char input2;
	int valid = 0;
	int hasupper = 0;
	int hasnumber = 0;
	int hasspecial = 0;
	char specialstring[] = "!@#$%^&*";
	int exit = 1;

	do {
		do {
			printf("\nPlease enter a password: ");
			scanf(" %s",input);
			hasupper = 0;
			hasnumber = 0;
			hasspecial = 0;
			valid = 0;

			if (strlen(input)>=8){
				for (int i=0;i<strlen(input);i++){
					if (isupper(input[i])){
						hasupper = 1;
					} 
					if (isdigit(input[i])){
						hasnumber = 1;
					}
					if (strchr(specialstring, input[i])){
						hasspecial = 1;
					}
				}
				valid = hasupper + hasnumber + hasspecial;
				if (hasupper==0){
					printf("Password needs a capital letter\n");
				}
				if (hasnumber==0){
					printf("Password needs a number\n");
				}
				if (hasspecial==0){
					printf("Password needs a special character\n");
				}
			} else {
				printf("Password is too short\n");
			}

		} while (valid!=3);
	printf("Password is valid\n");
	printf("Do you want to validate another pasword?(y/n) ");
	scanf(" %c",&input2);
	if (input2 == 'y'){
		exit = 0;
	}

	} while (exit==0);
	 return 0;
 }