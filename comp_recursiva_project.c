#include <stdio.h>

void sort(int v[],int n,int position, int k)
{
	if(k == n)
	{
		return;
	}
	else
	{
		if(v[k] == position)
		{
			v[k] = -1;
		}
		sort(v,n,k+1);
	}

}

void comp_vec(int v[], int n, int i)
{
	if(i == n)
	{
		return;
	}
	else
	{
		aux = v[i];
		sort(v,n,aux,i+1);
	}
}
void read_v(int v[], int n, int i)
{
	if(i == n)
	{
		return;
	}
	else
	{
		scanf("%d", v[i]);
		read_v(v,n,i+1);
	}
}
int main()
{
	int n,i;
	scanf("%d", &n);
	int v[n];
	read_v(v,n,0);
	comp_vec(v,n,0);
	return 0;
}