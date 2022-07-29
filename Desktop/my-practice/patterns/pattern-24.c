


/*
	WAP to print below pattern

a
AA
aaa
AAAA
aaaaa 

*/


#include <stdio.h>

int main() {

    char c = 'A';
    
    for(int i = 5;i > 0;i--)
    {
        for(int j = i;j <= 5;j++)
            if(i%2 == 0)
                printf("%c",c);
            else
                printf("%c",c+32);
        printf("\n");
    }

    return 0;
}


