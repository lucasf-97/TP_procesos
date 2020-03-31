/*
 * Ejercicio 2 de TP Procesos
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){

	pid_t pid;
	int i;

	for (i=1;i<4;i++){
		pid = fork();		
		printf ("Mi pid es %d y el pid de papa es %d.fork() devolvio %d. i=%d.\n", getpid(), getppid(), pid, i);
		}

	sleep(30); 

	exit(0);

}
