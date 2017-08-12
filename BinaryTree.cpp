#include <stdio.h>  
#include <stdlib.h>

struct tree{
	int parent;
	int leftchild;
	int rightchild;
};

int main(){
	int n, i, c, count = 1;
	int a[1500] = { 0 };
	tree A[100];
	scanf("%d", &n);
	A[0].parent = A[0].leftchild = A[0].rightchild = 0;
	for (int j = 1; j<100; j++){
		scanf("%d %d %d", &A[j].parent, &A[j].leftchild, &A[j].rightchild);
		c = j;
		if (A[j].leftchild != 0)
			count++;
		if (A[j].rightchild != 0)
			count++;
		if (count == n)
			break;
	}

	a[1] = A[1].parent;
	a[2] = A[1].leftchild;
	a[3] = A[1].rightchild;

	int g;
	for (int k = 1; k <= c; k++){
		for (int h = 1; h<1500; h++)
		if (A[k].parent == a[h]){
			a[h * 2] = A[k].leftchild;
			a[h * 2 + 1] = A[k].rightchild;
			if (a[h * 2 + 1] == 0)
				g = h * 2;
			else
				g = h * 2 + 1;
		}
	}

	int m = 1;
	while (a[m] != a[g]){
		printf("%d ", a[m]);
		m++;
	}
	if (a[g] != 0)
		printf("%d\n", a[g]);
	else
		printf("\n");

	system("pause");
	return 0;
}