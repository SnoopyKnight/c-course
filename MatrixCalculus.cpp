#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int trans(int**P, int**R, int size)
{
	int i, j;
	for (i = 0; i<size; i++)
	for (j = 0; j<size; j++)
		R[i][j] = P[j][i];

	return 0;
}



int add(int** P, int** Q, int**R, int size)
{
	int i, j;
	for (i = 0; i<size; i++)
	for (j = 0; j<size; j++)
		R[i][j] = P[i][j] + Q[i][j];
	return 0;
}

int mul(int** P, int** Q, int**R, int size)
{
	int i, j, k;
	for (i = 0; i<size; i++)
	for (j = 0; j<size; j++)
	{
		R[i][j] = 0;
		for (k = 0; k<size; k++)
			R[i][j] += P[i][k] * Q[k][j];
	}
	return 0;
}

int show(int**R, int size)
{
	int i, j;
	for (i = 0; i<size; i++)
	{
		for (j = 0; j<size; j++)
			printf("%4d ", R[i][j]);
		printf("\n");
	}
	return 0;
}

int main(void)
{
	int i, j, x, y, **A, **B, **C;
	printf("¿é¤J¯x°}¦æ¦C=>");
	scanf_s("%d", &x); y = x;

	// allocate memory
	A = (int**)malloc(x * sizeof(int *));
	B = (int**)malloc(x * sizeof(int *));
	C = (int**)malloc(x * sizeof(int *));
	for (i = 0; i < x; i++)
	{
		A[i] = (int*)malloc(y * sizeof(int));
		B[i] = (int*)malloc(y * sizeof(int));
		C[i] = (int*)malloc(y * sizeof(int));
	}

	srand(time(NULL));
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			A[i][j] = rand() % 5; // 
			B[i][j] = rand() % 5;
		}
	}

	printf("¯x°}A=\n");
	show(A, x);
	printf("¯x°}B=\n");
	show(B, x);
	printf("¯x°}A+B=\n");
	add(A, B, C, x);
	show(C, x);

	printf("¯x°}A*B=\n");
	mul(A, B, C, x);
	show(C, x);

	printf("¯x°}AªºÂà¸m¯x°}\n");
	trans(A, C, x);
	show(C, x);



	// free memory
	for (i = 0; i < x; i++)
	{
		free(A[i]);
		free(B[i]);
		free(C[i]);
	}
	free(A);
	free(B);
	free(C);
	system("pause");
	return 0;
}