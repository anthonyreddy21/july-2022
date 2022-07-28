

/*
	WAP to print below pattern

a 
b c 
d e f 
g h i j 
k l m n o 

*/


#include <stdio.h>

int main() {

    static int c = 97;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ",c++);
        }
    
        printf("\n");
    }

    return 0;
}


