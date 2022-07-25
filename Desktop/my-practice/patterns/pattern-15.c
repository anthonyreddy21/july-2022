

/*
	WAP to print below pattern

a
ba
cba
dcba
edcba

*/


#include <stdio.h>

int main()
{ 

	for(int i=0;i<5;i++)
	{
		for(int j=i;j>=0;j--)
			printf("%c",97+j);
		
		printf("\n");
    }
}
