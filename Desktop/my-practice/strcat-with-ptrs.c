

//  WAP to concatinate 2 strings using ptrs

#include <stdio.h>
#include <stdlib.h>



char* my_strcat(char *s,char *d)
{
    
   	int i=0,j=0;

	for(;*(s+i) != '\0';i++);

	while(*(s+i++) = *(d+j++));

    return s;
}

void main()
{

	char *s;
	char *d;

	s = (char*)malloc(32*sizeof(int));
	d = (char*)malloc(16*sizeof(int));


///	char *ptr = &s;

	printf("enter s1\n");
	scanf("%s",s);
	printf("enter s2\n");
	scanf("%s",d);

    printf("after strcat = %s",my_strcat(s,d));


	
	return 0;

}
