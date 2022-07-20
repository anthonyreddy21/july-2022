
/*
	WAP to print below pattern

5
45
345
2345
12345

*/



#include <stdio.h>

int main()
{
    int n=5;

    for(int i=n;i>0;i--)
    {
        for(int j=i;j<=n;j++)
            printf("%d",j);
            
        printf("\n");
    }

    return 0;
}