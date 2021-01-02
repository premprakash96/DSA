#include<stdio.h>

int stack[50], top = -1, size, min=1000, max=0;
void push(int x);
void pop();
void display();
void min_element();
void max_element();

int main()
{
    printf("Enter the size of the stack: ");
    scanf("%d", &size);
    display();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    push(60);
    min_element();
    max_element();
    pop();
    max_element();
    return 0;
}

void push(int x)
{
    if (top == size-1)
    {
        printf("\n Overflow");
        return;
    }
    stack[++top] = x;
    if (x<min)
    {
        min = x;
    }

    if (x>max)
    {
        max = x;
    }
    
    
    printf("\n %d pushed into the stack", x);
}

void pop()
{
    if (top ==-1)
    {
        printf("\n Underflow");
        return;
    }
    if (stack[top] == max)
    {
        max = 0;
    }

    if (stack[top] == min)
    {
        min = 1000;
    }
    
    int x = stack[top--];
    printf("\n Deleted item is %d \n", x);

    for (int i = top; i >= 0; i--)
    {
        if (stack[i]> max)
        {
            max = stack[i];
        }
        
    }

    for (int i = top; i >= 0; i--)
    {
        if (stack[i]< min)
        {
            min = stack[i];
        }
        
    } 
}

void display()
{
    if (top ==-1)
    {
        printf("\n No element to display");
        return;
    }
    printf("\n");
    for(int i= top; i>=0; i--)
    {
        printf("----\n");
        printf("|%d| \n", stack[i]);
    }
    printf("----");
    
}

void min_element()
{
    printf("\n The minimum element is %d", min);
}

void max_element()
{
    printf("\n The maximum element is %d", max);
}