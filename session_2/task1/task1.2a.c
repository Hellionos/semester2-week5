//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char truepassword[50]="secure123";
	 int correct = 0;

	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
     while(correct==0){
        printf("Enter the password: ");
        scanf(" %s ", password);
        if (strcmp(password,truepassword)==0){
            printf("Password is correct!\n");
            break;
        }
     }
	
    return 0;
}


/*Example:
int x;
printf("Enter number of iteration: ");
scanf("%d", &x);
while(x > 0){
 printf("%d ", x);
 x--;
}*/