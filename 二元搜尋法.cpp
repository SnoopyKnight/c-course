# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int binsearch(int list[], int searchnum, int left, int right)
{     /* search list[0]<=list[1]<=…<=list[n‐1] for searchnum. Return its position if found. Otherwise return ‐1 */
	int middle;
	if (left <= right) {
		middle = (left + right) / 2;
		switch (COMPARE(list[middle], searchnum)) {
		case ‐1: return
			binsearch(list, searchnum, middle + 1, right);
		case 0: return middle;
		case 1: return
			binsearch(list, searchnum, left, middle – 1);
		}
	}
	return ‐1;
}

int main()
{
	int list[1000],searchnum,k,left,right;
	scanf("%d",&searchnum);
	scanf("%d",&k);
	scanf("%d",list[k]);
	printf("%d",)
}