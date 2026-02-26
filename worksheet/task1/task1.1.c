// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>

int main(void) {
    
	for(int x=2; x<=100; x++){
		int isprime = 1;

		for(int y=2; y*y<=x; y++){
			if (x % y == 0){
				isprime = 0;
				break;
			}
			

		}
		//if ((x-2) % x == 0){
			//continue;
		if (isprime){
			printf("%d ",x);
		}
	}
	

	return 0;
}



/*2,3,5,7,11,13,17,19,23,29*/