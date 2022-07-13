
// WAP to count no. of sets
// ex. arr{1,2,3,1,2,3,4} has two sets of 1, two sets of two and two sets of 3
// so the o/p should be 3 i.e., 1 has a set, 2 has a set and 3 has a set

// 1. in Main
#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,1,2,3,4};
    
    int n=0,count=0;
    
    n = sizeof(arr)/sizeof(arr[0]);
    
    count = fun(arr,n);
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
                
            }    
    }

    printf("no. of sets = %d\n",count);

    printf("\n");

    return 0;
}

// 2. Using Functions


#include <stdio.h>

int fun(int arr[],int n)
{
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
                
        }    
    }
    
    return count;
}


int main()
{
    int arr[] = {1,2,3,1,2,3,4};
    
    int n=0,count=0;
    
    n = sizeof(arr)/sizeof(arr[0]);
    
    count = fun(arr,n);

    printf("no. of sets = %d\n",count);

    printf("\n");

    return 0;
}

// 3. using function pointers




