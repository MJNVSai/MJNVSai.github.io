#include<stdio.h>
#include<stdlib.h>
int d,d1;

struct node
{
    int coef,expo;
    struct node *next;
} *new1,*p1,*head1,*new2,*p2,*head2;

int main()
{
    // code to create 1st polynomial;
    printf("Enter 1st polynomial\n");
    do
    {
        new1 = (struct node*)malloc(sizeof(struct node*));
        printf("Enter coefficent and exponent: ");
        scanf("%d %d",&new1->coef,&new1->expo);
        new1->next = NULL;
        
        if(head1 == NULL)
        {
            head1 = new1;
            p1 = new1;
        }
        else
        {
            p1->next = new1;
            p1 = new1;
            // This else part creates an arrow between 2 nodes
        }
        printf("\nDo you want next node (0/1): ");
        scanf("%d",&d);
    }while(d == 0);

    // code to create 2st polynomial;
    printf("\nEnter 2nd polynomial\n");
    do
    {
        new2 = (struct node*)malloc(sizeof(struct node*));
        printf("Enter coefficent and exponent: ");
        scanf("%d %d",&new2->coef,&new2->expo);
        new2->next = NULL;
        
        if(head2 == NULL)
        {
            head2 = new2;
            p2 = new2;
        }
        else
        {
            p2->next = new2;
            p2 = new2;
            // This else part creates an arrow between 2 nodes
        }
        printf("\nDo you want next node (0/1): ");
        scanf("%d",&d1);
    }while(d1 == 0);

    p1 = head1;
    p2 = head2;
    
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->expo == p2->expo)
        {
            printf("\n");
            printf("%dx^%d",p1->coef+p2->coef,p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->expo > p2->expo)
        {
            printf("\n");
            printf("%dx^%d",p1->coef,p1->expo);
            p1 = p1->next;
        }
        else
        {
            printf("\n");
            printf("%dx^%d",p2->coef,p2->expo);
            p2 = p2->next;
        }
        if(p1!=NULL||p2!=NULL)
        {
            printf("+");
        }
    }
    return 0;
}
