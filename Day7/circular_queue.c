#include<stdio.h>
void enqueue();
void dequeue();
void display();

int queue[10], f= -1, r=-1, size;
int main()
{
    printf("\n enter the total size of queue: ");
    scanf("%d", &size);
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    enqueue();
    display();
    dequeue();
    display();
    return 0;
}

void enqueue()
{
    int x;
    printf("\n enter the item to insert: ");
    scanf("%d", &x);
    if (r!=-1 && (r+1)%size == f)
    {
        printf("\n Overflow");
        return;
    }
     if (r == -1)
     {
         r = f = 0;
     }
     else
     {
         r = (r+1)%size;
         printf("going to insert in position %d", r);
     }
     queue[r] = x;  
}

void dequeue()
{
    int x;
    if (f == -1)
    {
        printf("\n Underflow");
        return;
    }
    x = queue[f];
    printf("\n The number is %d", x);
    if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f+1)%size;
    }
    
}

void display()
{
    for (int i = f; i <= r; i++)
    {
        printf("\n The elements and their position are %d and %d", queue[i], i);
    }
    
}