#include <stdio.h>
#include <stdlib.h>

void counting_sort(int a[], int b[], int k, int n)
{
	int *c = (int*)malloc(sizeof(int)*(1+k));
	int i;

	for(i = 0; i <= k; i++)
	{
		c[i] = 0;
	}

	for(i = 1; i <= n; i++)
	{
		c[a[i]]++;
	}

	for(i = 1; i <= k; i++)
	{
		c[i] = c[i-1]+c[i];
	}

	for(i = 1; i <= n; i++)
	{
		b[c[a[i]]] = a[i];
		c[a[i]]--;
	}

	return;
}

void radix_sort(int a[], int k, int n, int d)
{
	int *b = (int *)malloc(sizeof(int)*(n+1));
	int *t = (int *)malloc(sizeof(int)*(n+1));
	int i;
	int j;
	for(i = 1; i <= n; i++)
	{
		b[i] = 0;
		t[i] = 0;
	}

	for(i = d; i <= 1; i++)
	{
		for(j = 1; j <= n; j++)
		{
			t[j] = a[i]%(10**d);
		}
		counting_sort(a, b, k, n);

	return;
}

int main(void)
{
	return 0;
}