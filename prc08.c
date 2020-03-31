/*
 * Ejercicio 8 de TP Procesos
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){

	pid_t pid;

printf ("El proceso unico es del pid %d\n", getpid());

pid = fork();

	switch (pid)

		{  case -1: printf ("ERROR: Hijo no generado\n");
		    return -1;
		   break;
			
		   case 0:
			printf ("Soy el hijo, PID %d y mi padre es el pid %d. fork() = %d\n", getpid(), getppid(), pid);
			sleep (30);
			printf ("Mi pid sigue siendo %d\n", getpid());
		      exit (0);
		    break;


		   default:	
			printf ("Soy el padre, PID %d y el pid padre es %d. fork() = %d\n", getpid(), getppid(), pid);
		   break;
		}
 
exit(0);

}
