#include <stdio.h>

void main(void)
{

    int arr[] = {1, 3, 4, 1, 3, 2, 1};
    int i, j;
    int lenght = sizeof(arr) / sizeof(arr[0]);
    // lenght--;
    int count;
    int freq[lenght];

    for (i = 0; i < lenght; i++)
    {
        count = 1;
        // printf("%d\n", arr[i]);
        for (j = i + 1; j < lenght; j++)
        {
            // printf("%d \t", arr[j]);
            if (arr[i] == arr[j])
            {
                printf("%d \n", arr[j]);
                count++;
                freq[j] = -1;
            }
        }

        if (freq[i] != 0)
        {
            printf(" in If %d\n", count);
            freq[i] = count;
        }
    }

    for (int i = 0; i < lenght; i++)
    {
        // if (freq[i] != 0)
        printf("%d-%d\n", arr[i], freq[i]);
    }
}