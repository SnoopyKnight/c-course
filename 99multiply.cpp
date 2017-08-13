#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j,product;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			product = i * j;
			printf("%d * %d = %d\n",i,j,product);
		}
	}
	system("pause");
	return 0;
}