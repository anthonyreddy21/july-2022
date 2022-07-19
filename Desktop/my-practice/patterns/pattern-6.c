
/*
	6. WAP to print below pattern

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1

*/

#include <stdio.h>

int main()
{

    for(int i=0;i<5;i++)
    {
        int max = 5;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",max--);
        }
    
        printf("\n");
    }

    return 0;
}


