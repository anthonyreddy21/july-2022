
/*
	27. WAP to print below pattern of fibanocci series

1 
2 3 
5 8 13 
21 34 55 89 
144 233 377 610 987 

*/

#include <stdio.h>

int main()
{
    int n1=0,n2=1,temp=0;

	for(int i=1;i<=5;i++)
	{
	    for(int j=0;j<i;j++)
	    {
	        temp = n1 + n2; 
	        printf("%d ",temp);
	        n1 = n2;
	        n2 = temp;
	        
	        
	    }
	    printf("\n");
	}
	return 0;
}
