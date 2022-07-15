

// WAP getmin in stack using arrays

#include<stdio.h>

int stack[100],n=10,top,min=0;

void getmin()
{

    if(top == 0)
        min = stack[top];
    else
    {
        for(int i=top; i>=0; i--)
        {
            if(stack[i] <= min)
                min = stack[i];
        }
    }
    printf("min element is %d\n",min);
    
}

void push()
{
    int x;
    if(top>=n-1)
        printf("\n\tSTACK is over flow");

    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
        printf("\n\t Stack is under flow");
    else
    {
        printf("\n\t The popped element is %d",stack[top]);
        top--;
    }
	
	getmin();
	
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
        printf("\n The STACK is empty");
   
}





int main()
{
    int choice=0;
    top=-1;

    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT ");
                break;
            }
            default:
                printf ("Enter a Valid Choice\n");
                
        }
    }
    while(choice!=4);
    return 0;
}

