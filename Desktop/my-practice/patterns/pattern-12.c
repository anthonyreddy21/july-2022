

/*
	WAP to print below pattern

a
bb
ccc
dddd
eeeee

*/



#include <stdio.h>

int main()
{
    char c = 'a';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
    return 0; 
}


