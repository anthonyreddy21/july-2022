
// WAP swap two numbers using pointers

//1. using main()

#include <stdio.h>

int main()
{
    
    int num1, num2;
    int *ptr1, *ptr2, temp;
 
    printf("Enter the value of x and y\n");
    scanf("%d%d", &num1, &num2);
 
    printf("before swapping\n");
	printf("num1 = %d\t  num2 = %d\n",num1,num2);
 
    ptr1 = &num1;
    ptr2 = &num2;
 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
 
    printf("after swapping\n");
    printf("num1 = %d\t  num2 = %d\n",num1,num2);

 

    return 0;
}

// 2. using function **************************************************************

#include <stdio.h>

int ptr_swap(int *i,int *j)
{
    
    int temp;
    
    temp = *i;
    *i = *j;
    *j = temp;
    
}

int main()
{
    
    int num1, num2;
    int *ptr1, *ptr2;
 
    printf("Enter the value of x and y\n");
    scanf("%d%d", &num1, &num2);
 
    printf("before swapping\n");
	printf("num1 = %d\t  num2 = %d\n",num1,num2);
	
	ptr_swap(&num1,&num2);
 
    printf("after swapping\n");
    printf("num1 = %d\t  num2 = %d\n",num1,num2);

    return 0;
}


// 3. using function pointer *************************************************

#include <stdio.h>

int ptr_swap(int *i,int *j)
{
    
    int temp;
    
    temp = *i;
    *i = *j;
    *j = temp;
    
}

int main()
{
    
    int num1, num2;
    int *ptr1, *ptr2;
 
    printf("Enter the value of x and y\n");
    scanf("%d%d", &num1, &num2);
 
    printf("before swapping\n");
	printf("num1 = %d\t  num2 = %d\n",num1,num2);
	
	ptr1 = &num1;
    ptr2 = &num2;
	
	int(*fun_ptr)(int*,int*) = ptr_swap;
	
	fun_ptr(ptr1,ptr2);
 
    printf("after swapping\n");
    printf("num1 = %d\t  num2 = %d\n",num1,num2);

    return 0;
}



