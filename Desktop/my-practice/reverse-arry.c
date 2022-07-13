


//   WAP to reverse an array

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    
    int i=0,j=0;
    
    j = sizeof(arr)/sizeof(arr[0]) - 1;
    
    printf("j = %d\nbefore reversing the array\n",j);
    
    for(i=0;i<=j;i++)
        printf("arr[i] = %d\t",arr[i]);
        
    printf("\n");
    
    for(i=0;i < j; i++,j--)
    {
        
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
    }
    
    j = sizeof(arr)/sizeof(arr[0]) - 1;
    
    printf("j = %d\nAfter reversing the array\n",j);

    for(i=0;i<=j;i++)
        printf("arr[i] = %d\t",arr[i]);

    return 0;
}


