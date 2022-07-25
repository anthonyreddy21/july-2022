
//   WAP to count set bits using function pointers


#include<stdio.h>
int fun(int num)
{

    int count=0;
    
 /*   while (num) 
    {
        count += num & 1;
        num >>= 1;
    }
  */  
    while(num)
    {
        if(num & 1 == 1)
        {
            count++;
            num = num >> 1;
        }
    }
    return count;
}
  
int main()
{ 
              int num =0;
      printf("enter a no.\n");
  scanf("%d",&num);
    int (*fun_ptr)(int) = fun;  // & removed
  
    int cnt = fun_ptr(num);  // * removed
      printf("Value of count is %d\n", cnt);
    return 0;
}