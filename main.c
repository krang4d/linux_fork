/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Linux fork() introdaction from Brian Fraser
 *
 *        Version:  1.0
 *        Created:  04.01.2020 16:43:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Golovkin P.G. (Pavel), jzi@inbox.ru
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int i = 0;
void doSomeWork(char *name)
{
        const int NUM_TIMES = 5;
        for ( ; i < NUM_TIMES; i++) {
                sleep(rand() % 4);
                printf("Done pass %d for %s\n", i, name);
        }
}
int main(int argc, char *argv[])
{
   printf("I am: %d\n", (int) getppid());

   pid_t pid = fork();
   srand((int)pid);
   printf("fork returned: %d\n", (int) pid);

   if(pid < 0)
   {
           perror("fork is failed");
   }
   if(pid == 0)
   {
           printf("I am the child with pid %d\n", (int) getppid());
           doSomeWork("Child");
           printf("Child exiting...\n");
           exit(0);
   }
   // We must be the parent
   printf("I am the parent\n");
   doSomeWork("Parent");
   wait(NULL);
   printf("Parent ending.\n");

   return 0;                   
}
