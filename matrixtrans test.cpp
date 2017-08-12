# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_TERM 100
# define BUFFER_SIZE 100

typedef struct matrix{
	int row;
	int column;
	int value;
} matrix;

void swap(int *x, int *y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

void sort(matrix list[], int length){
	int j, k;
	k = length;
	for (j = 0; j < k - 1; j++)
	{
		if (list[j + 1].column < list[j].column)
			swap(&list[j + 1].column, &list[j].column);
	}
}

int main(){
	matrix A[100], B[100];
	int i, nums;
	char string[BUFFER_SIZE];
	fgets(string, BUFFER_SIZE, stdin);
	while (fgets(string, BUFFER_SIZE, stdin) != NULL){

		B[0].column = A[0].row = atoi(strtok(string, " \t\n"));
		B[0].row = A[0].column = atoi(strtok(NULL, " \t\n"));
		B[0].value = A[0].value = nums = atoi(strtok(NULL, " \t\n"));

		for (i = 1; i <= nums; i++){
			if (fgets(string, BUFFER_SIZE, stdin) != NULL){
				A[i].row = atoi(strtok(string, " \t\n"));
				A[i].column = atoi(strtok(NULL, " \t\n"));
				A[i].value = atoi(strtok(NULL, " \t\n"));
			}
			else{
				exit(1);
			}
		}

		for (i = 1; i <= nums; i++){
			B[i].column = A[i].row;
			B[i].row = A[i].column;
			B[i].value = A[i].value;
			sort(B, i);
		}
		for (i = 0; i <= nums; i++){
			printf("%d%d%d", &B[i].row, &B[i].column, B[i].value);
		}
	}
	system("pause");
	return 0;
}