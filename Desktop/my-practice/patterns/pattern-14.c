
/*
	WAP to print below pattern

a
ab
abc
abcd
abcde

*/

#include <stdio.h>

int main()
{ 

            for(int i=0;i<5;i++)
        {
                for(int j=0;j<=i;j++)
                        printf("%c",97+j);

        printf("\n");
        }
}

