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
    printf("enter number of nodes \n");
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

void traverse(node *a,int m)
{
    int i;
 node *p;
 p=a;
 for(i=0;i<m;i++)
 {
     printf("%d->",p->value);
     p=p->next;

 }
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

void deletenode(node *a,int m,int n)
{
    node *p,*b,*c;
    int i,j;
    c=a;
    p=a;
    for(i=0;i<m-1;i++)
    {
        p=p->next;
    }
    b=p;

    for(j=0;j<n;j++)
    {
        p=p->next;
    }
    b->next=p->next;

   while(c!=NULL)
    {
        printf("%d->",c->value);
        c=c->next;
    }

    }

int main()
{
    int m,n;
    node *p;
    p=create();
    printf("enter m \n");
    scanf("%d",&m);
    printf("enter n \n");
    scanf("%d",&n);
    printf("traversing %d nodes.. \n \n",m);
    traverse(p,m);
    printf("\n \n after deleting... \n \n");

  deletenode(p,m,n);
    return 0;
}
