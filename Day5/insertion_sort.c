#include<stdio.h>

int *insertion(int arr[], int n);
void display(int arr[], int n);

int main()
{
    int arr[10], n;
    int *sort_arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort_arr = insertion(arr, n);
    display(sort_arr, n);
    return 0;
}

int *insertion(int arr[], int n)
{
    int i, j ,key, val, pos;
    for(i = 1; i<n; i++)
    {
        val = arr[i];
        pos = i;
        while (pos>0 && arr[pos-1] > val)
        {
            arr[pos] = arr[pos-1];
            pos-=1;
        }
        arr[pos] = val;
        
    }
    return arr;
}

void display(int arr[], int n)
{
    printf("\n Array Elements are: ");
    for (int i=0; i<n; i++)
    {
        printf("%d \t", arr[i]);
    }
}