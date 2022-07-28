

/*
	WAP to print below pattern

e
de
cde
bcde
abcde

*/



#include <stdio.h>

int main() 
{

    for(int i=5;i>0;i--)
    {
        for(int j=i;j<=5;j++)
            printf("%c",97+j-1);
    
        printf("\n");
    }

    return 0;
}

