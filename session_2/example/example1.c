/*
 In this example, the program reads input from the terminal
 until the user type "." or a line starting with "."
*/


#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[100];

    while ( fgets( buffer,sizeof(buffer),stdin )[0] != '.' ) {
        buffer[strcspn(buffer,"\n")] = '\0';
        printf("Read: %s\n",buffer);
    }
    
    return 0;
}

/*@Hellionos ➜ /workspaces/semester2-week5/session_2/example (main) $ ./example1
g
Read: g
vbhb
Read: vbhb
fawdsfwafetg4t
Read: fawdsfwafetg4t
 ^[[18~7^[OS  rt 43t
Read:  7S  rt 43t
.gew*/