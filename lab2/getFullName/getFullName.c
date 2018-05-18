#include <stdio.h>
#include <string.h>

#define BUFFERSIZE 128

int main (int argc, char *argv[])
{
    char buffer[BUFFERSIZE];
    printf("Enter your name: \n");
    while(fgets(buffer, BUFFERSIZE , stdin) != NULL)
    {
        printf("%s\n", buffer);
    }
    return 0;
}