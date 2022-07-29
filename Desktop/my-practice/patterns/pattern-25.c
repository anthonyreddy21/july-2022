
/*
	WAP to print below pattern

1
bb
333
dddd
55555 

*/


#include <stdio.h>

int main() {

    char c = 'a';
    int n = 1;
    
    for(int i = 5;i > 0;i--)
    {
        for(int j = i;j <= 5;j++)
            if(i%2 == 0)
                printf("%c",c);
            else
                printf("%d",n);

        printf("\n");
        c++;
        n++;
    }

    return 0;
}

