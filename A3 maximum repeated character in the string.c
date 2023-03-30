#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int maxFreq = 0, len, i, j, maxIndex;
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        freq[i] = 0;
    }
    for(i = 0; i < len; i++)
    {
        for(j = i+1; j < len; j++)
        {
            if(str[i] == str[j])
            {
                freq[i]++;
            }
        }
    }
    for(i = 0; i < len; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxIndex = i;
        }
    }
    printf("Max repeated character in the string = %c\n", str[maxIndex]);
    printf("It occurs %d times\n", maxFreq+1);
    return 0;
}
