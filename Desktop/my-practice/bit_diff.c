

// WAP different bits in given two numbers.

#include<stdio.h>

void bit_diff(int a, int b)
{
    int count = 0;

    for (int i = 0; i < 32; i++) 
    {
        if (((a >> i) & 1) != ((b >> i) & 1)) 
            count++;
    }
    
    printf("different bits of %d  and %d  is %d\n",a,b,count);

}
 
int main()
{
    int a = 0, b = 0;
    
    printf("enter 1st number\n");
    scanf("%d",&a);
    
    printf("enter 2nd number\n");
    scanf("%d",&b);
 
    bit_diff(a,b);
 
    return 0;
}



