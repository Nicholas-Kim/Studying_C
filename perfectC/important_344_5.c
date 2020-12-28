#include <stdio.h>

int main()
{
	int j = 0;
	for (int i = 1; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%3d", i);
			printf("\n");
		}
	}
	return 0;
}
