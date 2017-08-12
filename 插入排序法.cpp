#include <stdio.h>

int main(){
	int i, a[100], n = 0, j, k, t, l, key;

	while (scanf("%d", &a[n]) != EOF){
		n++;
	}
	for (j = 1; j< n; j++){
		key = a[j];
		i = j - 1;
		while ((i > 0 || i == 0) && a[i] > key){
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
	for (l = 0; l<n; l++)
		printf("%d ", a[l]);
	printf("\n");

	return 0;
}