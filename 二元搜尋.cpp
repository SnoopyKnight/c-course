# include <stdio.h>
# include <stdlib.h>

int COMPARE(int list,int searchnum)
{
	if(list < searchnum) return -1;
	if(list == searchnum) return 0;
	if(list > searchnum) return 1;
}

int binsearch(int list[], int searchnum, int left, int right)
{     /* search list[0]<=list[1]<=…<=list[n‐1] for searchnum. Return its position if found. Otherwise return ‐1 */
	int middle;
	if (left <= right) {
		middle = (left + right) / 2;
		switch (COMPARE(list[middle], searchnum)) {
		case -1: return
			binsearch(list, searchnum, middle + 1, right);
		case 0: return middle;
		case 1: return
			binsearch(list, searchnum, left, middle - 1);
		}
	}
	return -1;
}


int main()
{
	int list[1000], searchnum, k,left=0,right,i,j;
	for(j=0;j<2;j++)
	{
		scanf("%d", &searchnum);
		scanf("%d", &k);
		for(i=0;i<k;i++)
		scanf("%d", &list[i]);
		right=k;
		printf("%d", binsearch(list, searchnum, left, right));
		printf("\n");
	}
	system("pause");
	return 0;
}