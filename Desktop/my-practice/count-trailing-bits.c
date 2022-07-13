

//  WAP to count no. of trailing bits in a number
// 1. using main()

#include <stdio.h>

int main() {
    // Write C code here
   // printf("Hello world");
  
  int num=0,count=0;
  
  printf("enter a number\n");
  scanf("%d",&num);
  
//  int n = 1;
  
  //for(int i=0;num != 0;i++)
  while(num != 0)
  {
      if(num & 1 == 1)
        break;
       else
       { 
           count++;
           num  = num>>1;
       }
  }
  
  printf("count = %d", count);
    return 0;
}

// 2. using function

#include <stdio.h>

int fun(int num)
{
    int count =0;
    while(num != 0)
    {
      if((num & 1) == 1)
        break;
       else
       { 
           count++;
           num  = num>>1;
       }
    }
    return count;
}


int main() {
    // Write C code here
   // printf("Hello world");
  
  int num=0;
  
  printf("enter a number\n");
  scanf("%d",&num);
  
  printf("trailing zeroes = %d\n", fun(num));
    return 0;
}

