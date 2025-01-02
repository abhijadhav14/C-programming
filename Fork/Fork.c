#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void forkeg()
{
    if (fork() == 0)
        printf("hello child\n");
    else
        printf("hello parent\n");

}

int main()
{
    forkeg();
    return 0;
}
