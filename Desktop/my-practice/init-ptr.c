

// WAP to create, initialize and use pointers.

#include <stdio.h>


int main()
{
    int i = 15;
    
    int *ptr = &i;		//	or int *ptr ;	ptr = &i;
    
    printf("value of i = %d\t and address of i = %p\n",i,&i);

    printf("value of ptr = %d\t and address of ptr = %p\n",*ptr,ptr);
    printf("address where ptr is stored at is %p\n",&ptr);

    return 0;
}



