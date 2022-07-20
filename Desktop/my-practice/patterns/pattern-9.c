
/*
	WAP to print below pattern
	
1 
4 9 
16 25 36 
49 64 81 100 
121 144 169 196 225

*/




#include <stdio.h>

int main()
{
    static int c = 1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",c*c);
            c++;
        }
    
        printf("\n");
    }

    return 0;
}

