#include<stdio.h>
#include<stdlib.h>
struct s {
int item;
int flag;
struct s * next;
};
typedef struct s node;
typedef node * nodeptr;
void push(nodeptr *,int,int);
nodeptr  get_duplicates(nodeptr *);
void free_pos(nodeptr *,int);
void remove_duplicates(nodeptr *);
void printlist(nodeptr *);
nodeptr nptr=NULL;
nodeptr np=NULL; 
int main(void)
{
    
    
    push(&np,13,0);
    push(&np,21,0);
    push(&np,36,0);
    push(&np,28,0);
    push(&np,21,0);
    push(&np,89,0);
    push(&np,21,0);
    push(&np,45,0);
    push(&np,89,0);
    printlist(&np);
    nodeptr  n=get_duplicates(&np);
    remove_duplicates(&n);
    
    printf("the new list without duplicates is\n");
    printlist(&np);
    return 0;
}

void push(nodeptr *n,int value,int f)
{

    nodeptr temp=*n;
    nodeptr temp1=(node *)malloc(sizeof(node));
    temp1->item=value;
    temp1->flag=f;
    temp1->next=NULL;
    if(temp==NULL)
    {
        *n=temp1;
    
    
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        
        }
        temp->next=temp1;
        
    
    }

}
void printlist(nodeptr *n)
{
    nodeptr temp=*n;
    while(temp!=NULL)
    {
        printf("element is %d\n",temp->item);
        temp=temp->next;
        
    }

}
nodeptr get_duplicates(nodeptr *n)
{
    nodeptr temp=*n;
    nodeptr temp1;
    
    int j;
    int i=1;
    while(temp->next!=NULL)
    {        
       
       temp1=temp->next;
        j=i+1;
        while(temp1!=NULL)
        {   
            
            if(temp1->item==temp->item && temp1->flag==0)
            {
                
                //printf("\ntemp is %d and temp1 is %d",temp->item,temp1->item);  
                //printf("value of j is %d",j);
                push(&nptr,j,0);
                temp1->flag=1;           
                
            }
                      
            //printf("\nvalue of j is %d",j);
            temp1=temp1->next;
            j++;    
        }
       temp=temp->next;
       //printf("\nvalue of i is %d",i);
       i++;
       //printf("\nthe temp values are changing to %d",temp->item);
        
    
    }
//printf("\nduplicates are \n");    
//printlist(&nptr);
return nptr;
}
void free_pos(nodeptr * nd,int pos)
{

    nodeptr tmp=*nd;
    int i=1;
    while(i<pos-1)
    {
        tmp=tmp->next;
        i++;
    }
    nodeptr t=tmp->next;
    tmp->next=tmp->next->next;
    free(t);
       
        
 }

void remove_duplicates(nodeptr *n)
{
    nodeptr temp=*n;
    int i=0;
    while(temp!=NULL)
    {
        free_pos(&np,temp->item-i);
        i++;
        temp=temp->next;
    }


}
