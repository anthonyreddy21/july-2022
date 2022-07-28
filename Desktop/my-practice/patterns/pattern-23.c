

/*
	WAP to print below pattern

0 
2 4 
6 8 10 
12 14 16 18 
20 22 24 26 28 

*/



#include <stdio.h>

int main() 
{

    static int c = 0;
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


