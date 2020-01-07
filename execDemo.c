/*
 * =====================================================================================
 *
 *       Filename:  execDemo.c
 *
 *    Description:  Linux Exec System Call from Brian Freser
 *
 *        Version:  1.0
 *        Created:  07.01.2020 12:48:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Golovkin P.G. (Pavel), jzi@inbox.ru
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
        char *args[] = { "./helloExec", "Hello", "World", NULL };
        execvp("./helloExec", args);
        return EXIT_SUCCESS;
}	/* ----------  end of function main  ---------- */
