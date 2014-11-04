#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	getchar();
	int i;
	for(i = 1; i <= 3; i++)
	{
		printf("%d\n", (int)pow(10,i));
	}
	return 0;
}