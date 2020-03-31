/*
 * Ejercicio 4 de TP Procesos
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){

	pid_t pid;
	int i=50, res;

	switch (fork())
		{  case -1: printf ("ERROR: Hijo no generado\n");
			
		   case 0: res=i*0;
			printf ("Soy el hijo, PID %d y el resultado que doy es %d\n", getpid(), res);

		   default: res=i*2;	
			printf ("Soy el padre, PID %d y el resultado que doy es %d\n", getpid(), res);
		}
 

	exit(0);

}
