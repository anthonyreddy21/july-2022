


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

	pid_t child_id = fork();
	
	if(child_id > 0)            //      parent process
	{
	    printf("in parent process\n");
	    sleep(20);              // parent process is sleeping, while child exited. Then the child becomes zombie bcoz, parent doesn't know.
	}
	else                        //      child process
	{
	    printf("in child process\n");
	    exit(0);
	}
	    
	return 0;

}
		
		
		
		




