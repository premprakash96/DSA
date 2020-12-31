#include<stdio.h>

int arr[10], n;

int main()
{
    printf("\n Enter the no of elements to be stroed in array. Should be less than 10: ");
    scanf("%d", &n);

    printf("\n Enter the array elements");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display();
    delete_at_begin();
    display();
    delete_at_any_loc();
    display();
}

void display()
{
    printf("\n Array Elements are: ");
    for (int i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
}

void delete_at_begin()
{
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}

void delete_at_any_loc()
{
    int loc;
    printf("\n Enter the location to delete the element within %d: ", n);
    scanf("%d", &loc);
    if(loc < 0 && loc > n)
    {
        printf("Input is invalid");
    }

    else
    {
        for (int i = loc-1; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        
    }
    
}
