#include <stdio.h>

void print_array(int new[], int tam, int i)
{
	if(i == tam)
	{
		return;
	}
	else
	{
		printf("%d\n", new[i]);
		print_array(new,tam,i+1);
	}
}

void ler(int v[],int n, int i)
{
	if(i == n)
	{
		return;
	}
	else
	{
		scanf("%d", &v[i]);
		ler(v,n,i+1);
	}
}
int main()
{
	int i,k,n, tam = 0;
	scanf("%d", &n);
	int v[n];
	ler(v,n,0);
	for(i = 0; i < n - 1; i++)
	{
		for(k = i + 1; k < n; k++)
		{
			if(v[i] == v[k])
			{
				v[k] = -1;
			}
		}
	}
	printf("\n");
	for(i = 0; i < n; i++)
	{
		if(v[i] != -1)
		{	
			tam++;
		}
		
	}
	int new[tam];
	for(i = 0; i < n; i++)
	{
		if(v[i] != -1)
		{
			new[tam] = v[i];
			tam++;
		}
	}
	print_array(new,tam,0);

	return 0;
}