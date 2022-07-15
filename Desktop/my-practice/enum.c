






#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec}; 
int main()
{
    enum week day;
    day = Thur;

    printf("%d  size = %d\n",day, sizeof(day));
 
    int j;
    for (j=Jan; j<=Dec; j++)     
      printf("%d ", j);
       
   return 0;
}


