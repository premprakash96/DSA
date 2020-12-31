#include<stdio.h>
int arr[10], k, n;

int main()
{
    printf("Enter no of elements in array. enter less than 10: ");
    scanf("%d", &n);
    printf("\n enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display();
    rotate();
    display();
}

void rotate()
{
    int temp, i, j;
    printf("\n Enter no of rotations to rotate the array: ");
    scanf("%d", &k);
    for (i = 0; i < k ; i++)
    {
        temp = arr[0];
        for (j = 0; j < n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[j] = temp;
        
    }
    
}

void display()
{
    printf("\n Array Elements are: ");
    for (int i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
}