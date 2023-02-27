#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    int i;

    srand(time(NULL)); // initialize random seed with current time

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = '!' + rand() % ('~' - '!' + 1); // generate random printable ASCII character
    }
    password[PASSWORD_LENGTH] = '\0'; // add null terminator to the end of the password

    printf("%s\n", password);

    return 0;
}

