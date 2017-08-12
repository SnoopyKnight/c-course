# include <stdio.h>
# include <stdlib.h>

#define MAX_TERMS 1000
#define COMPARE(x,y) (((x)<(y))?-1:((x)==(y))?0:1) 

typedef struct{
	float coef;    //係數
	int expon;     //次方
}polynomial;

polynomial terms[MAX_TERMS], a[MAX_TERMS] , b[MAX_TERMS] ;// //MAX_TERM 為一常數，用來決定每一個陣列的項數上限
int avail;

void attach(float coefficient,int exponent);

void padd(int startA , int finishA , int startB , int finishB , int* startD , int* finishD) // add A(x) and B(x) to obtain D(x)
{
	float coefficient;
	*startD=avail;
	while(startA<=finishA && startB<=finishB){ //(A and B are not end yet)
		   switch(COMPARE(terms[startA].expon,terms[startB].expon)){		
		   case  1 : attach(terms[startA].coef,terms[startA].expon);  // a expon > b expon                     
					startA++;
					break;
		   case -1 : attach(terms[startB].coef,terms[startB].expon);  // a expon < b expon															   
					startB++;
					break;
		   case 0 : coefficient = terms[startA].coef+terms[startB].coef;  // a expon = b expon
			   if(coefficient)
				   attach(coefficient,terms[startA].expon);            
					   startA++;
					   startB++;
					   break;
		   }
	}
	for(;startA<=finishA;startA++)  //Add every A term which not been added into result
		attach(a[startA].coef,a[startA].expon);
	for(;startB<=finishB;startB++)  //Add every B term which not been
		attach(b[startB].coef,b[startB].expon);
	*finishD=avail-1;
}

void attach(float coefficient,int exponent){   //add a new terms to polynomial
	if(avail>=MAX_TERMS)
		exit(0);
	terms[avail].coef = coefficient;
	terms[avail++].expon = exponent;
}

int main(){
	int n,m,i,j,k;
	polynomial a[MAX_TERMS],b[MAX_TERMS],d[MAX_TERMS];
	scanf("%d",&n);    //表示第一個多項式的非零項個數
	for(i=0;i<n;i++){
		scanf("%f%d",&a[i].coef,&a[i].expon);
	}
	scanf("%d",&m);    //表示第二個多項式的非零項個數
	for(j=0;j<m;j++)
		scanf("%f%d",&b[j].coef,&b[j].expon);
	
	for(i=0;i<n;i++){   //印第一個多項式
		if(a[i].coef>0)
			printf(" +%.2fx^%d",(a[i].coef),(a[i].expon)); 
		else if(a[j].coef==0)
			printf(" %.2f",(a[i].coef));
	}
	printf("\n");
	
	for(j=0;j<m;j++){   //印第二個多項式
		if(b[j].coef>0)
			printf(" %+.2fx^%d",(b[j].coef),(b[j].expon));
		else if(b[j].coef==0)
			printf(" %.2f\n",(b[j].coef));
	}
	printf("\n");

	/*padd(int startA , int finishA , int startB , int finishB , int* startD , int* finishD) */
	poly_add(startA,endA,startB,endB,&startD,&endD);

	padd(*a ,*a+i, *b ,*b+j ,&d, &d+*k );
	for(k=0;k<MAX_TERMS;k++)  //印結果
		printf(" %.2fx^%d",d[k].coef,d[k].expon);
	printf("\n");
	system("pause");
	return 0;
}