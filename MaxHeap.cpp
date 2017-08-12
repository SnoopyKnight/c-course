#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void printHeap(int i, int a[]){
	int j;
	for (j = 1; j<i; j++){
		printf("%d[%d] ", j, a[j]);
	}
	printf("%d[%d]", i, a[i]);
	putchar('\n');
}

int main()
{
	int treeA[100];
	int i = 1, j;
	while (scanf("%d", &treeA[i]) != EOF){
		// insert
		j = i;
		while (j != 1 && treeA[j]>treeA[j / 2]){
			swap(&treeA[j], &treeA[j / 2]);
			j = j / 2;
		}

		// print
		printHeap(i, treeA);

		i++; // Heap total
	}



	system("pause");
	return 0;
}