#include <stdio.h>
#include <string.h>

void askname(char *fname, char *sur)
{
     
    printf("Enter your first name: ")
    fgets(fname, 255, stdin);
    fname[strlen(fname)-1] = '\0';

    printf("Now enter your surname: ")
    fgets(sur, 255, stdin);
    sur[strlen(sur)-1] = '\0';
}