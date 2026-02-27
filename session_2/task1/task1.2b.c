//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;
	// complete the rest of the code here
	do {
		printf("Enter 'q' to quit: ");
		scanf(" %c ",&choice);
		if(choice=='q'){
			printf("You will now exit\n");
		}
	} while (choice !='q');
	
    return 0;
}

/*Example:
char c;
do {
 printf("Continue? (y/n): ");
 scanf(" %c", &c);
} while (c != 'n');
*/