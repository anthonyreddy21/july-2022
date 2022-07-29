


/*
	WAP to print below pattern

0 
-1 2 
-3 4 -5 
6 -7 8 -9 
10 -11 12 -13 14 

*/

#include <stdio.h>

int main() {

    static int n=0;

    for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			if(n%2 == 0)
			    printf("%d ",n);
			else 
				printf("%d ",-n);
			n++;
		}
		printf("\n");
	}

    return 0;
}

