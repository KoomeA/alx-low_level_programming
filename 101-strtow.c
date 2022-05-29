#include "main.h"
#include <stdio.h>
int main()
{
	char str1[100]
	char newString[10][10];
	int i,j,ctr;
		printf("\n\n Split string by space into words :\n");
		printf("-----------------------\n);

	printf("Input a string : ");
	fgets(str1, sizeof str1, stdin);

	j=0 ctr=0
		for(i=0;i<=(strlen(str1));i++)
		{
			if(str1[i]==' '||str1[i]=='\0')
			{
				neString[ctr][j]='\0';
				ctr++;
				j=0;
			}
			esle
			{
				newString[ctr][j]=str1[i];
				j++;
			}
		}
		printf("\n strings or words after split by space are :\n");
		for(i=0;i < ctr;i++)
			printf(" %s\n",newString[i]);
		return 0;
}
