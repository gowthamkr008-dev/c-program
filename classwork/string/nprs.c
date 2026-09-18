#include<stdio.h>
#include<string.h>
#if 0
int main(){
	int k,n;
	scanf(" %d",&k);
	scanf(" %d",&n);
	char str[50] ;
	char str2[30];
	for(int i=0;i<k;i++){
		str[i] = i + 97;
		str2[i] = i + 97;
	}
	int len = strlen(str);
	int i = len-1;
	while(i != n){
		str[i]= str2[i];
	char temp = str2[0];
	for(int j = 0;j < len-1;j++){
		str2[j] = str2[j+1];
	}
	str[len-1] = temp;
	i++;
	}
	/* right rotate string
	int len = strlen(str);
	
	*/
	
	str[n] ='\0';
	printf("after adding : %s",str);
	return 0;
}

#endif

#if 1

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
        ch[i] = i + 97;
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

    nrps(ch, C, N);

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

#endif
