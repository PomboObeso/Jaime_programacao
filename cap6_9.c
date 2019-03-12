#include <stdio.h>

void print_vector(int vector[], int n, int i)
{
	if(i == n)
	{
		return;
	}
	else{
		printf("%d\n",vector[i]);
		print_vector(vector,n,i+1);
	}
}
void read(int v[], int n, int i)
{
	if(i == n)
	{
		return;		
	} 
	else
	{
		scanf("%d", &v[i]);
		read(v,n,i+1);	
	}
}
int main()
{
	int i,n, position,insert;
	scanf("%d", &n);
	int v[n];
	read(v,n,0);
	scanf("%d %d",&position , &insert);
	int new_vector[n+1];
	for(i = 0; i < n+1; i++)
	{
		if(i == position)
		{
			new_vector[i] = insert;
			i++;
		}
		else
		{
			new_vector[i] = v[i];
		}
	}
	print_vector(new_vector,n+1,0);
	return 0;
}