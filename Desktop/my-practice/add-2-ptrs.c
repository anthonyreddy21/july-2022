

// Add 2 no.s with pointers

#include <stdio.h>


int main()
{

	int num1=10,num2=20,sum=0,*ptr1,*ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

   sum = *ptr1 + *ptr2;
	
	printf("Addition of num1 %d and num 2 %d is = %d\n",num1,num2,sum);

	return 0;
	
}


