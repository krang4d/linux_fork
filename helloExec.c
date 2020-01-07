
#include	<stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
        printf("helloExec.c\n");
        printf("\tMy PID %d\n", getpid());

        printf("\tMy arguments: ");
        for(int i =0; i < argc; i++)
        {
                printf("%s, ", argv[i]);
        }
        printf("\n");
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
