// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {
 
	int input1 = 0;
	int count = 0;
	int sum = 0;
	float average = 0;

	printf("--- Average Calculator ---\n");
	printf("Enter a -1 to exit.\n");
	while (input1 != -1){
		printf("Enter a postive number: ");
		scanf(" %d",&input1);
		if (input1 != -1){
			sum = sum + input1;
			count++;
		}

	}
	if (count != 0){
		average = (float)sum/(float)count;
	}
	printf("The average of thesee numbers is %.2f\n",(float)average);

    	
	return 0;
}