#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include <stdlib.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

void  main(void)
{
    int pid;

    for(int i =0; i < 2;++i){
    pid = fork();
  
    if (pid == 0){
        int sleeper = (rand() % 10) + 1;
        int timer = (rand() % 30) + 1;
      for(int i = 0; i < timer; i++){
         printf("Child PID: %d is going to sleep!\n", getpid());
         sleep(sleeper);
         printf("Child %d: I'm awake!\n Where is my Parent %d?\n", getpid(), getppid());
       }
      exit(0);

    }
    else if(pid >0){
      int status = wait(&status);

      printf("Child Pid: %d has completed!\n",status);
    }
    else{
      printf("Woops, something went wrong!");

      exit(0);
    }
  }
}