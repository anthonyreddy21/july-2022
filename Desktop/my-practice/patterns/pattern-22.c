
/*
	WAP to print below pattern

1 
3 5 
7 9 11 
13 15 17 19 
21 23 25 27 29 

*/



#include <stdio.h>

int main() 
{

    static int c = 1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",c);
            c += 2;
        }
    
        printf("\n");
    }

    return 0;
}

