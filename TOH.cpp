# include <stdio.h>
# include <stdlib.h>

int count = 0;

void printHanoi(int *start, int *other, int *goal)
{
	printf("***********************************\n");
	printf("After Moved %d Times: \n", count);
	int i, j, k;
	printf("A: ");
	for (i = 0; i <= 8; i++){
		if (start[i] == 0)
			break;
		printf("%d ", start[i]);     //原本:printf("%d\n",i);   我是印盤子 
	}
	printf("\nB: ");                 //原本printf("B: ");   換行 
	for (j = 0; j <= 8; j++){
		if (other[j] == 0)
			break;
		printf("%d ", other[j]);     //同上  C也是 
	}
	printf("\nC: ");
	for (k = 0; k <= 8; k++){
		if (goal[k] == 0)
			break;
		printf("%d ", goal[k]);
	}
	printf("\n");
}

void Hanoi(int n, int *start, int *other, int *goal,int *A,int *B,int *C)    //新增ABC三個陣列       因為start other goal會隨時變動 沒?法當作準確的ABC柱 
{
	int i = 0, j = 0;
	if (n == 1)
	{
		for (i = 8; i > 0; i--)
		{
			if (start[i] != 0)
				break;
		}
		for (j = 8; j >= 0; j--)
		{
			if (goal[j] != 0)
				break;
		}
		goal[j + 1] = start[i];
		start[i] = 0;
		count++;  // 盤子動了  步數++
		if(count%5==0)    //步數變了 所以檢察 
		  printHanoi(A,B,C); 
	}
	else
	{
		Hanoi(n - 1, start, goal, other,A,B,C);
		Hanoi(1, start, other, goal,A,B,C);
		Hanoi(n - 1, other, start, goal,A,B,C);
	}
	
}
int main()
{
	int n, i,j,k, a[100] = { 0 }, b[100] ={0}, c[100]={0};
	scanf("%d", &n);
    printf("Number of Discs: %d\n",n);    //原本無%d 跟\n 
	printf("***********************************\n");
	printf("Initial State: \n");         // 原本:跟\n之間無空白 
	for (i = 0; i<n; i++)
	{
		a[i] = n-i;                      //  n是迴圈執行條件之一 不可n-- 
	}
    printf("A: ");
	for (i = 0; i <= 8; i++){
		if (a[i] == 0)
			break;
		printf("%d ", a[i]);     //原本:printf("%d\n",i);   我是印盤子
	}
	printf("\nB: \nC: \n");                 //初始狀態 B柱C柱  必定無盤 
	Hanoi(n, a, b, c,a,b,c);
	
	
	                   // 印結果 直接印就好 請參考初始 
	
	
	system("pause");
	return 0;
}