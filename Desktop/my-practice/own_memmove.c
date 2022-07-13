

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void *my_Memmove(void *s1, const void *s, unsigned int n)
{
	int i;
	char *temp;
	
	const char *src = (const char *)s; 
   	char *dest = (char *)s1; 

	temp = (char *)malloc(n* sizeof(char));
	
	for(i = 0; i <n; i++)
		*(temp+ i ) = *(src+ i);

	for(i = 0; i < n; i++)
		*(dest+i) = *(temp+i);
	
	free(temp);

	return dest;
}


int main()
{
    char src[100],dest[100];
    
    printf("enter a string\n");
    scanf("%s",src);
   
    my_Memmove(dest, src, strlen(src)+1);
    printf("after memmove, the string is %s\n", dest);
    
	return 0;	
	
}

