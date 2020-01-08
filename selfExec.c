/*
 * =====================================================================================
 *
 *       Filename:  selfExec.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07.01.2020 22:11:40
 *       Revision:  none:
 *       Compiler:  gcc
 *
 *         Author:  Golovkin P.G. (Pavel), jzi@inbox.ru
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
        printf("selfExec.c: My PID is %d.\n", getpid());

        if ( argc != 2 ) {
                printf("Pass 1 argument as an integer\n");
        }
        int n = atoi(argv[1]);
        printf("%d...\n", n);
        
        if (n != 0 ) {
                char nMinus[10];
                sprintf(nMinus, "%d", n-1);
                execl(argv[0], argv[0], nMinus, NULL);
        }
        printf("Farewell cruel world!\n");
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
