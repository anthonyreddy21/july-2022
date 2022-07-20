

/*
	WAP to print below pattern

e
dd
ccc
bbbb
aaaaa

*/


#include <stdio.h>

int main()
{
    char c = 'e';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",c);
        }
        c--;
        printf("\n");
    }
    return 0; 
}

