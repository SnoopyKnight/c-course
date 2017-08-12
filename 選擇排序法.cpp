#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int k, n[100], i, j, l, m;
	//k <= 100 && k>=1;
	for (m = 0; m < 2; m++)
	{
		scanf_s("%d", &k);
		for (i = 0; i < k; i++)
			scanf_s("%d", &n[i]);
		for (l = 2; l<k; l++)
		{
			for (j = 0; j < k - 1; j++)
			{
				if (n[j + 1] < n[j])
					swap(&n[j + 1], &n[j]);
			}
		}
		for (j = 0; j < k - 1; j++)
			printf("%d ", n[j]);
		printf("%d", n[k - 1]);
		printf("\n");
	}
	system("pause");
	return 0;
}