#include<stdio.h>
#include<stdlib.h>
struct double_node{
int item;
struct double_node *prev;
struct double_node *next;
};
typedef struct double_node node;
typedef node * nodeptr;
void insert_beg(nodeptr *,int);
void insert_middle(nodeptr *,int,int);
void insert_end(nodeptr *,int);
void print_list(nodeptr *n);
void delete_key(nodeptr *n,int);
void free_all(nodeptr *n);
void print_position(nodeptr *,int,int);

int main(void)
{
nodeptr nptr=NULL;
insert_beg(&nptr,30);
insert_beg(&nptr,40);
insert_middle(&nptr,50,2);
insert_middle(&nptr,100,2);
insert_middle(&nptr,21,3);
insert_end(&nptr,75);
//delete_key(&nptr,75);
//print_list(&nptr);
print_position(&nptr,3,1);
printf("\n\n");
print_position(&nptr,3,2);

return 0;
}

void insert_beg(nodeptr *n,int val)
{
    nodeptr temp,temp1;
    temp1=*n;
    temp=(nodeptr)malloc(sizeof(node));
    
    temp->item=val;
  
  printf("\nassigning the item a value");
    temp->prev=NULL;
   
    printf("\nmaking the previous pointer NULL");
    if(temp1==NULL)
    {
        temp->next=NULL;
        
    }
    else if(temp1!=NULL)
    {
        temp->next=temp1;
        temp1->prev=temp;
        
    }
    *n=temp;


}
void insert_middle(nodeptr *n,int val1,int pos)
{
    nodeptr temp;
    nodeptr temp1=*n;
    temp=(nodeptr)malloc(sizeof(node));
    int i;
    for(i=1;i<pos-1;i++)
    {
        temp1=temp1->next;
    }
    
    temp->item=val1;
    temp->prev=temp1;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    temp1->next=temp;
}
void insert_end(nodeptr *n ,int val2)
{
    nodeptr temp,temp1;
    temp1=*n;
    temp=(nodeptr)malloc(sizeof(node));
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp->item=val2;
    temp->next=NULL;
    temp->prev=temp1;
    temp1->next=temp;
}
void print_list(nodeptr *n)
{
nodeptr temp=*n;
printf("\nprint list function call");

while(temp!=NULL)
{
    printf("\nthe node is %d",temp->item);
    temp=temp->next;

}


}
void delete_key(nodeptr *n,int key)
{
    nodeptr temp=*n;
    while(key!=temp->item)
   {
		temp=temp->next;
		    
   
   }
	if(temp->prev==NULL)
	{
		
		temp->next->prev=NULL;	
		free(temp);
		*n=temp->next;
	
	}
	else if(temp->next==NULL)
	{
		temp->prev->next=NULL;
		free(temp);
	
	}
	else
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	
	}


}
void free_all(nodeptr *n)
{
	nodeptr temp=*n;
	while(temp!=NULL)
	{
		temp=temp->next;
		free(temp);
	
	}



}

void print_position(nodeptr *n,int pos,int flag)
{
	nodeptr temp=*n;
	int i;
	
	for(i=1;i<pos;i++)
	{
		temp=temp->next;
	}
	if(flag==1){

	while(temp!=NULL)
	{
		printf("\nthe value of the node is %d",temp->item);
		temp=temp->next;

	}
	}
	
	else if(flag==2)
	{
	while(temp!=NULL)
	{
		printf("\nthe value of the node is %d",temp->item);
		temp=temp->prev;
	}


	}

}




