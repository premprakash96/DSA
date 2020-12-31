#include<stdio.h>

void ternary_search(int *arr, int beg, int end, int x);

int main()
{
    int arr[10], x, n;
    printf("Enter the no. of elements");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no to search: ");
    scanf("%d", &x);
    ternary_search(arr, 0, n-1, x);
    return 0;
}

void ternary_search(int *arr, int beg, int end, int x)
{
    int mid1, mid2;
    while (beg <= end)
    {
        mid1 = beg + (end-beg) / 3;
        mid2 = end - (end-beg) / 3;
        printf("beginning is at %d and ending is at %d", beg, end);
        printf("mid1 is at %d and mid2 is at %d", mid1, mid2);
        if (x == arr[mid1])
        {
            printf("Element found at %d", mid1);
            return;
        }
        else if(x == arr[mid2])
        {
            printf("Element found at %d", mid2);
            return;
        }
        else if(x < arr[mid1])
        {
            printf("Element is before %d", mid1);
            end = mid1-1;
        }
        else if(x > arr[mid2])
        {
            printf("Element is after %d", mid2);
            beg = mid2+1;
        }
        else
        {
            printf("Element is within %d and %d", mid1, mid2);
            beg = mid1+1;
            end = mid2-1;
        }
    }
    printf("Element not found");
}
