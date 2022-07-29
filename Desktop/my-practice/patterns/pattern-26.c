

/*
	WAP to print below pattern

a
22
ccc
4444
eeeee 

*/


#include <stdio.h>

int main() {

    char c = 'a';
    int n = 1;
    
    for(int i = 5;i > 0;i--)
    {
        for(int j = i;j <= 5;j++)
            if(i%2 == 0)
                printf("%d",n);
            else
                printf("%c",c);

        printf("\n");
        c++;
        n++;
    }

    return 0;
}

