


/*
	WAP to print below pattern

e
ed
edc
edcb
edcba

*/


#include <stdio.h>

int main()
{ 

        for(int i=5;i>0;i--)
        {
                for(int j=5;j>=i;j--)
                        printf("%c",97+j-1);
        printf("\n");
        }
}

