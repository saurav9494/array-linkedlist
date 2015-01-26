#include<stdio.h>
#include<malloc.h>

struct Node
{
    int value;
    struct Node *next;

};
typedef struct Node node;
node *head1,*head2,*head3;

node* create1()
{
    node* p;
    int k,n1,n2;
    printf("enter no. of nodes in node1 \n");
    scanf("%d",&n1);
    for(k=0;k<n1;k++)
    {
        if(k==0)
        {
            head1=(node*)malloc(sizeof(node));
            p=head1;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head1);
    }

node* create2()
{
    node* p;
    int k,n2;
    printf("enter no. of nodes in node1 \n");
    scanf("%d",&n2);
    for(k=0;k<n2;k++)
    {
        if(k==0)
        {
            head2=(node*)malloc(sizeof(node));
            p=head2;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head2);
    }

    node* merge(node* a,node* b)
    {
        node *p1,*p2,*p3;
        p1=a;
        p2=b;

        head3=(node*)malloc(sizeof(node));
        p3=head3;

        if(p1->value <= p2->value)
        {
            p3->value=p1->value;
        }
        else
        {
        p3->value=p2->value;
        }

        while(p1!=NULL && p2!=NULL)
        {
             p3->next=(node*)malloc(sizeof(node));
            if(p1->value < p2->value)
            {
                p3->value=p1->value;

            }
            else
            {
                p3->value=p2->value;
            }
            p3=p3->next;
        }
        p3->next=NULL;
        return (head3);

    }

void display(node *a)
{
node *start;
start=a;
while(start!=NULL)
{
    printf("%d->",start->value);
    start=start->next;
}
}

int main()
{
    node *a,*b,*c;

a=create1();
b=create2();
c=merge(a,b);
display(c);
}
