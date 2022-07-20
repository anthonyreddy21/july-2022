

/*
	WAP to print below pattern

1
**
222
****
33333

*/



#include <stdio.h>

int main()
{
    int p=0,n=5;
    for(int i=1;i<=5;i++)
    {
        if(i%2 == 1)
            p++;
        for(int j=1;j<=i;j++)
        {
            if(i%2 == 0)
                printf("*");
            else
                printf("%d",p);
        }
        
        printf("\n");
    }
    return 0; 
}

