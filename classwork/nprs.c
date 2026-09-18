#include <stdio.h>

void nrps(char [], int, int);

int main()
{
    int C, N;
    char ch[100];
    int i, j;

   // printf("Enter the number characters C : ");
    scanf("%d", &C);

   // printf("Enter the Length of the string N : ");
    scanf("%d", &N);

   // printf("Enter %d distinct characters : ", C);
    for (i = 0; i < C; i++)
    {
        scanf(" %c", &ch[i]);
    }

    for (i = 0; i < C; i++)
    {
        for (j = i + 1; j < C; j++)
        {
            if (ch[i] == ch[j])
            {
                printf("Error : Enter distinct characters\n");
                return 0;
            }
        }
    }

    nrps(ch, k	, N);

    return 0;
}

void nrps(char ch[], int C, int N)
{
    char str[100];
    int i, k = 0;

    while (k < N)
    {
        for (i = 0; i < C && k < N; i++)
        {
            str[k++] = ch[i];
        }
        char temp = ch[0];
        for (i = 0; i < C - 1; i++)
        {
            ch[i] = ch[i + 1];
        }
        ch[C - 1] = temp;
    }

    str[N] = '\0';

    printf("Possible NRPS is %s\n", str);
}
