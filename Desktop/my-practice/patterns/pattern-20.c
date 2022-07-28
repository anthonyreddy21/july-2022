
/*
	WAP to print below pattern

1
01
101
0101
10101

*/


#include <stdio.h>

int main() 
{

    for(int i=5;i>0;i--)
    {
        for(int j=i;j<=5;j++)
        {
            if(j%2==0)
                printf("0");
            else 
                printf("1");
        }
        
        printf("\n");
    }

    return 0;
}

