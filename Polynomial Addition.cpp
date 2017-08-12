# include <stdio.h>
# include <stdlib.h>

#define MAX_TERMS 1000
#define COMPARE(x,y) (((x)<(y))?-1:((x)==(y))?0:1) 

typedef struct{
	float coef;    //�Y��
	int expon;     //����
}polynomial;

polynomial terms[MAX_TERMS];  // //MAX_TERM ���@�`�ơA�ΨӨM�w�C�@�Ӱ}�C�����ƤW��
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
		   }
	for(;startA<=finishA;startA++)  //Add every A term which not been added into result
		attach(terms[startA].coef,terms[startA].expon);
	for(;startB<=finishB;startB++)  //Add every B term which not been
		attach(terms[startB].coef,terms[startB].expon);
	*finishD=avail--;
	}
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
	scanf("%d",&n);    //���ܲĤ@�Ӧh�������D�s���Ӽ�
	for(i=0;i<n;i++){
		scanf("%f%d",&a[i].coef,&a[i].expon);
	}
	scanf("%d",&m);    //���ܲĤG�Ӧh�������D�s���Ӽ�
	for(j=0;j<m;j++)
		scanf("%f%d",&b[j].coef,&b[j].expon);

	//padd(0 ,i, 0 ,j ,0, &k );
	for(i=0;i<n;i++){   //�L�Ĥ@�Ӧh����
		if(a[i].coef>0)
			printf(" +%.2fx^%d",(a[i].coef),(a[i].expon)); 
		else if(a[i].coef<0)
			printf(" %.2fx^%d\n",(a[i].coef),(a[i].expon));
		else
			printf(" %.2f\n",(a[i].coef));
	}
	
	for(j=0;j<m;j++){   //�L�ĤG�Ӧh����
		if(b[j].coef>0)
			printf(" +%.2fx^%d",(b[j].coef),(b[j].expon));
		else if (b[j].coef<0)
			printf(" %.2fx^%d",(b[j].coef),(b[j].expon));
		else
			printf(" %.2f",(b[j].coef));
	}

	/*for(k=0;k<MAX_TERMS;k++)  //�L���G
		printf(" %dx^%d",d[k].coef,d[k].expon);
		*/
	system("pause");
	return 0;
}