#include<stdio.h>

typedef struct Node
{
    int data;
    struct node *next;
}node;

node *create(int x);
node *insert_end(node *head, int x);
node *insert_any(node *head);
void display(node *head);
node *delete_beg(node *head);
void *delete_end(node *head);

int main()
 {
     node *head = NULL;
     int x;
     while (x!=-999)
     {
         printf("Enter the number to add in linkedlist. type -999 to stop entering: ");
         scanf("%d", &x);
         if(x!=-999)
            head = insert_end(head, x);
     }
    display(head);
    // head = insert_any(head);
    // display(head);
    head = delete_beg(head);
    display(head);
    delete_end(head);
    display(head);
 }

 node *create(int x)         // function returning pointer
{
    node *new = (node *)malloc(sizeof(node));
    new -> data = x;
    new -> next = NULL;
    return new;
}

node *insert_end(node *head, int x)
{
    node *new = create(x);
    node *temp = head;
    if (!head)
    {
        head = new;
        return head;   
    }
    while (temp -> next)
    {
        temp = temp -> next;
    }
    temp -> next = new;
    return head;
    
}

node *insert_any(node *head)
{
    int x, pos;
    printf("\n Enter the no to be inserted: ");
    scanf("%d", &x);
    printf("\n Enter the position to insert in reference to starting position as 0: ");
    scanf("%d", &pos);
    node *new = create(x);
    node *temp = head;
    if (!head)
    {
        head = new;
        return head;   
    }
    for (int i = 0; i < pos-1; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    new->next = temp->next;
    temp->next = new;
    return head;
}


void display(node *head)
{
    if (!head)
    {
        printf("\n No node to display");
        return;
    }
    node *temp = head;
    while (temp)
    {
        printf("|%d| ->", temp ->data);
        temp = temp->next;
    }
    printf("N \n");
    
}

node *delete_beg(node *head)
{
    node *temp = head;
    head = head -> next;
    free(temp);
    return head;
}

void *delete_end(node *head)
{
    if (!head)
    {
        printf("No node to delete");
    }
    node *temp = head->next, *temp_prev = head;
    if (!temp)
    {
        free(head);
        return;
    }
    
    while (temp->next!=NULL)
    {
        printf("\n while deletion traversal");
        printf("|%d| ->", temp ->data);
        temp = temp->next;
        temp_prev = temp_prev->next;
    }
    free(temp);
    temp_prev -> next = NULL;

    
}