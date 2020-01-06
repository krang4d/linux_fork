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

int main(int argc, char *argv[])
{
   printf("I am: %d\n", (int) getppid());

   pid_t pid = fork();
   printf("fork returned: %d\n", (int) pid);

   if(pid < 0)
   {
           perror("fork is failed");
   }
   if(pid == 0)
   {
           printf("I am the child with pid %d\n", (int) getppid());
   } else if (pid > 0)
   {
           printf("I am the parent\n");
   }
   return 0;                   
}
