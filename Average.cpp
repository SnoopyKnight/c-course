# include <stdio.h>
# include <stdlib.h>

#define MAX_TERM 1000

typedef struct{
	double ch;
	double eng;
	double math;
}term;

int main()
{
	term a[MAX_TERM];
	int n, i;
	double cSum = 0, eSum = 0, mSum = 0;
	double average, aveC, aveE, aveM;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%lf %lf %lf", &a[i].ch, &a[i].eng, &a[i].math);
		cSum += a[i].ch;
		eSum += a[i].eng;
		mSum += a[i].math;
	}
	aveC = cSum / n;
	aveE = eSum / n;
	aveM = mSum / n;
	average = (cSum + eSum + mSum) / 3 / n;
	printf("%.1f %.1f %.1f %.1f\n", average, aveC, aveE, aveM);
	system("pause");
	return 0;
}