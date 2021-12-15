#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
void main(void)
{

    int letter[26] = {0};
    int oneCount = 0;
    int twoCount = 1;
    char question[] = {"mdaamm"};
    int n = strlen(question);

    for (int i = 0; i < n; i++)
    {
        letter[question[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (letter[j] == 1)
            oneCount++;
        if (letter[j] % 2 != 0)
            twoCount = 0;
    }
    printf("%s", oneCount <= 1 && twoCount ? "yes" : "no");
}
