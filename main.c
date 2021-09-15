
#include <stdio.h>
#include "askname.h"

int main(int argc, char **argv)
{

    char fname[255], sur[255];

    askname(first, last);

    printf("Hello, %s %s!\n", fname, sur);

    return 0;
}
