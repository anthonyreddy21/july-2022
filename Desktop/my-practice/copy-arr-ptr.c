
// WAP to copy arr1 elements into arr2 using pointers

#include <stdio.h>

int main()
{

    int arr1[20], arr2[20];
    int size, i;
 
    int *ptr1 = arr1; 
    int *ptr2 = arr2; 
 
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("enter arr1 elements: ");

    for(i = 0; i < size; i++)
        scanf("%d", ptr1 + i);   
 
    printf("\n arr1 elements before coping: ");
    
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr1 + i));
 
    printf("\n arr2 elements before coping: ");
    
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr2 + i));
        
    int *arr_end = &arr1[size-1];

	while(ptr1 <= arr_end)
	{
	   *ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}

    printf("\narr1 elements after coping: ");
    
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr1 + i));
 
    printf("\narr2 elements after coping: ");
    
    for(int i = 0; i < size; i++)
        printf("%d ", *(arr2 + i));

    return 0;

}