#include <stdio.h>
int main()
{
    int a[10] = { 10,-1,100,90,87,0,15,10,20,30 }, n = 10;
    int b[n], i;

    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }
    printf("The first array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nThe second array is :");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;  
    }
