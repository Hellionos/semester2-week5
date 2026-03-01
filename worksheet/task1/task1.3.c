// Worksheet 2.5

/* 
 * Task 1.3 - Practice
 * Write a program that generates two random numbers between 1 and 6 with a constraint
 * that the sum of these two numbers cannot be 7. If the sum is 7,
 * regenerate two new random numbers. Use a do..while loop for this task.
 * The loop should terminate when a sum other than 7 is achieved and print the
 * two numbers. You should use srand() and rand().
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int min = 1;
	int max = 6;
	int rand1 = 0;
	int rand2 = 0;
	int sum = 0;
 
	srand(time(NULL)); // Seed the random generator
	printf("Generate two numbers between 1-6 with total cannot be 7\n");
	do {
		rand1 = min + rand() % (max - min +1);
		rand2 = min + rand() % (max - min +1);
		sum = rand1 + rand2;
	} while (sum == 7);
    	
	printf("Numbers rolled were %d and %d\n",rand1,rand2);

	return 0;
}
//target = min + rand() % (max - min + 1);