#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char fname[255], sur[255];
    
    printf("Enter your first name: ")
    fgets(fname, 255, stdin);
    fname[strlen(fname)-1] = '\0';

    printf("Now enter your surname: ")
    fgets(sur, 255, stdin);
    sur[strlen(sur)-1] = '\0';
    
    printf("Hello %s %s!\n", fname, sur);
    return 0;
}