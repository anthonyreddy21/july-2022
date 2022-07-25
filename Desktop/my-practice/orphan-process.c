

// Online C compiler to run C program online


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	pid_t child_id = fork();
	
	if(child_id > 0)            //      parent process
	{
	    printf("in parent process\n");
	    exit(0);
	}
	else                        //      child process
	{
	    printf("in child process\n");
	    sleep(20);              //      child process is sleeping, while parent exited. Then the child becomes orphan
	}
	    
	return 0;

}


