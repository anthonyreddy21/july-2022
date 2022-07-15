












#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node* next;
};

struct Node *head=NULL;

void *add_at_begin(int data)
{

	struct Node* new_node = NULL;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;

	if (head == NULL )
		head = new_node;
		
	else
	{
		new_node->next=head;
		head=new_node;
	}
	
}

void *add_at_end(int data)
{

	struct Node *new_node=NULL,*temp=NULL;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	
	
	if(head==NULL) 
			head=new_node;
	else
	{
		temp=head; 
		while(temp->next!=NULL)
			temp=temp->next;
		
		temp->next=new_node;
		
	}

}

void Display()
{
	if(head == NULL)
		printf("List is empty\n");

	else
	{
		while(head != NULL)
		{
			printf("*******%d\n ",head->data);
			head=head->next;
		}
	}
}

struct Node *Delete(int pos)
{

   if (head == NULL)
      return;
 
   struct Node* temp = head;
 
    if (pos == 0)
    {
        head = temp->next;   
        free(temp);              
        return;
    }
 
    for (int i=0; temp!=NULL && i<pos-1; i++)
         temp = temp->next;
 
    if (temp == NULL || temp->next == NULL)
         return;

    struct Node *next = temp->next->next;
 
    free(temp->next);  
 
    temp->next = next;  
}



int main()
{

	int choice=0,data=0,pos=0;
	while(1)
	{
	printf("1.add_at_begin 2.add_at_end 3. Display 4.Delete 5.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
				printf("enter data to add_at_begin\n");
				scanf("%d",&data);
				add_at_begin(data);
				break;
				
		case 2: 
				printf("enter data to add_at_begin\n");
				scanf("%d",&data);	
				add_at_end(data);
				break;
				
		case 3: 
				Display();
				break;
				
		case 4: 
		        Display();
		        printf("enter position to delete data\n");
		        scanf("%d",&pos);
		        head = Delete(data);
		        break;
		case 5:
				exit(0);
	}
	}
}










