


// WAP to find even or odd without using If else or switch

#include <stdio.h>

int main()
{ 

    int a =10;
    
//    a%2 == 0? printf("even"):printf("odd");
  
    char *arr[] = {"even","odd"};
    
    printf("number is %s",arr[a%2]);
    
    return 0;
}


