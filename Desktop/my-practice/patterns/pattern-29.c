


/*
	WAP to print below pattern

1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 

*/

#include <stdio.h>

int main() {

    for(int i = 1;i <= 5;i++)
    {
        for(int j = 1;j <= i;j++)
                printf("%d ",i*j);

        printf("\n");
    }

    return 0;
}

