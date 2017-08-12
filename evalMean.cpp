# include <stdio.h>
# include <math.h>

double aMean,gMean,hMean;

void  evalMean (double *x,double *y)
{
	aMean = (*x+*y)/2;
	double c=(*x)*(*y);
	gMean = sqrt(c);
	if(*x+*y==0)
		hMean = 0;
	else
		hMean  = 2*c/(*x+*y);
}

int main() {
    double a, b;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Please input two integers: ");
        scanf("%lf%lf", &a, &b);
        evalMean(&a,&b);
        printf("Their arithmetic mean is %lf\n", aMean);
        printf("Their geometric mean is %lf\n", gMean);
        printf("Their harmonic mean is %lf\n", hMean);
    }
    return 0;
}