#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i,v[5];
	char number[5];
	for(i = 0; i < 5; i++)
	{
		scanf("%s", number);
		v[i] = number[strlen(number) - 1] - '0';
	}

	for(i = 0; i < 5; i++)
	{
		printf("%d",v[i]);
	}
	printf("\n");

	return 0;
}