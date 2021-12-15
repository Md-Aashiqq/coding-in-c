#include <stdio.h>

void main(void)
{

    int arr[] = {1, 2, 0, -1, -2};

    int length = sizeof(arr) / sizeof(arr[0]);

    int postive = 0, negative = 0, netural = 0;

    for (int i = 0; i < length; i++)
    {

        if (arr[i] == 0)
            netural++;
        else if (arr[i] >= 1)
            postive++;
        else
            negative++;
    }

    printf(" postive - %0.1f \t netural - %0.1f \t negative - %0.1f ", (postive / length), (netural / length), (negative / length));
}