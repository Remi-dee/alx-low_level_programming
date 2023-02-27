#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
    srand(time(NULL)); 
    char password[PASSWORD_LENGTH + 1]; 
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) 
    {
    
	    password[i] = '!' + rand() % ('~' - '!' + 1); 
    
    }

    password[PASSWORD_LENGTH] = '\0'; 

    printf("%s\n", password);

    return 0;
}

