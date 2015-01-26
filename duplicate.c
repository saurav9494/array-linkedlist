#include<malloc.h>
#include<stdio.h>
struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
node *head;
node *create()
{
     node *p;
    int k,n;
    printf("enter number of nodes");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head);
}
void display(node* a){
node *start;
start=a;
while(start!=NULL)
{
    printf("%d->",start->value);
    start=start->next;
}
}

node* removenode(node* a)
{
    node *p,*b;
    p=a;
    while(p->next!=NULL)
    {
        if(p->value==p->next->value)
        {
        p->next=p->next->next;
        }
        else
        {
            p=p->next;
            b=p;
            p->next=b->next;

        }

    }
    return a;
}
int main()
{
    printf("hello... \n");
    node *p1,*p2;
    p1=create();

    p2=removenode(p1);

    display(p2);

}
