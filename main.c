#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include <stdlib.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

void  main(void)
{
    int pid;

    for(int i =0; i< 2; i++){
        pid = fork();
    }

}