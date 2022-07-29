


/*
	WAP to print below pattern

0 
1 -1 
2 -2 2 
3 -3 3 -3 
4 -4 4 -4 4 

*/

#include <stdio.h>

int main() {

    for(int i = 0;i < 5;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			if(j%2 == 0)
			    printf("%d ",i);
			else 
				printf("%d ",-i);
		}
		printf("\n");
	}

    return 0;
}

