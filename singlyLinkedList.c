/*
* this program implements singly linked list
*author: Lavanya Balla
*created 1/08/2018
*/

//required files
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
};
static int count=0;
void printList(struct Node *n)
{	
	if(n==NULL)
	{
		printf("\bLinked list is empty");	
		return;
	}	
	while (n != NULL)
	{
		printf(" %d ", n->data);
		n = n->next;
	}
}
void addBegning(struct Node** n,int data)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->next=NULL;
	node->data=data;
	if((*n)==NULL)
	{
		(*n)=node;
	}
	else
	{
		node->next=(*n);
		(*n)=node;
	}
	count++;
	printf("\nInserted sucessfully at begning");
}
void addLast(struct Node** n,int data)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	struct Node* last=(*n);
	node->next=NULL;
	node->data=data;
	if((*n)==NULL)
	{
		(*n)=node;
		return;
	}	
	while(last->next!=NULL)
		last=last->next;
	last->next=node;
	count++;
	printf("\nInserted sucessfully at End");
	return ;
}

void addAtPosition(struct Node** n,int data,int position)
{
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	struct Node* temp=(*n);
	node->next=NULL;
	node->data=data;
	int i;
	if(position==0)
        {
                node->next=(*n);
                (*n)=node;
        }
        else if(position<=count)
        {
                for(i=0;i<position-1;i++)
                {
                        temp=temp->next;
                        if(temp==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                node->next =temp->next ;
                temp->next=node;
        }	
	else
		printf("\nPlease Enter a coorect position");
	count++;
	printf("\nInserted sucessfully at position");		
}
void deleteBegning(struct Node** n)
{
	struct Node *temp=NULL;
	temp=(*n);
	if(temp->next==NULL)
	{
		printf("First node is %d is deleted",temp->data);
		(*n)=NULL;
	}
	else
	{
		(*n)=(*n)->next;
		printf("First node is %d is deleted",temp->data);
	}
	count--;
	free(temp);
}
void deleteEnd(struct Node** n)
{
	struct Node *temp,*back;
	temp=(*n);
	if(temp->next==NULL)
	{
		printf("last node is %d is deleted",temp->data);
		(*n)=NULL;
	}
	else
	{
		while(temp->next!=NULL)
		{
			back=temp;
			temp=temp->next;
		}
		if(back != NULL)
        		back->next = NULL;
 		 if(temp == (*n))
        		(*n) = NULL;
		printf("last node is %d is deleted",temp->data);
		temp->next=NULL;
	}
	count--;
	free(temp);		
}

void deletePosition(struct Node** n, int pos)
{
	struct Node *temp,*ptr;
	int i;	
	if(pos==0)
        {
                ptr=(*n);
                (*n)=(*n)->next ;
                printf("\nThe deleted element is:%d\t",ptr->data  );   
	        free(ptr);
        }
        else if(pos<=count)
        {
                ptr=(*n);
                for(i=0;i<pos;i++)
                {
                    	temp=ptr;
                        ptr=ptr->next ;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not Found:\n");
                                return;
                        }
                }
                temp->next =ptr->next ;  
                printf("\nThe deleted element is:%d\t",ptr->data );
                free(ptr);
        }
	else
		printf("\nplease Enter a correct position");
	count--;
}
int main()
{
	struct Node* head = NULL;
	//head  = (struct Node*)malloc(sizeof(struct Node));
	int data;
	int position;
	int choice;
	do
	{
		printf("\n\nSingly Linked List");
		printf("\n1.Add node at begning");
		printf("\n2.Add node at end");
		printf("\n3.Add a node at a given position");
		printf("\n4.Delete a node at begining");
		printf("\n5.Delete a node at end");
		printf("\n6.Deleate a node at given position.");
		printf("\n7.Display Linked List");
		printf("\n8.Exit");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nAdd node at begning");
				printf("\nEnter a element :");
				scanf("%d",&data);
				addBegning(&head,data);
				break;
			case 2: printf("\nAdd node at end");
				printf("\nEnter a element :");
				scanf("%d",&data);
				addLast(&head,data);
				break;
			case 3: printf("\nAdd at a given position");
				printf("\nEnter a postion");
				scanf("%d",&position);
				printf("\nEnter a element :");
				scanf("%d",&data);
				addAtPosition(&head,data,position);
				break;
			case 4: printf("\nDelete a node at begining");
				deleteBegning(&head);
				break;
			case 5: printf("\nDelete a node at End");
				deleteEnd(&head);
				break;
			case 6: printf("\nDeleate a node at given position");
				printf("\nEnter a postion");
				scanf("%d",&position);
				deletePosition(&head,position);
				break;
			case 7: printList(head);
				break;
			case 8: exit(0);
				break;
		}
	}while(1);
	return 0; 
}
