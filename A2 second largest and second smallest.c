#include <stdio.h>
int main()
{
    int n, i, arr[100];
    int largest1, largest2, smallest1, smallest2;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1])
    {
        largest1 = arr[0];
        largest2 = arr[1];
        smallest1 = arr[1];
        smallest2 = arr[0];
    }
    else
    {
        largest1 = arr[1];
        largest2 = arr[0];
        smallest1 = arr[0];
        smallest2 = arr[1];
    }


    for(i=2; i<n; i++)
    {
        if(arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if(arr[i] > largest2)
        {
            largest2 = arr[i];
        }

        if(arr[i] < smallest1)
        {
            smallest2 = smallest1;
            smallest1 = arr[i];
        }
        else if(arr[i] < smallest2)
        {
            smallest2 = arr[i];
        }
    }

    printf("Second largest element in the array is %d\n", largest2);
    printf("Second smallest element in the array is %d\n", smallest2);

    return 0;
}
