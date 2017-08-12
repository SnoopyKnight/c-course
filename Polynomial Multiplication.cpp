#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_TERM 100
#define COMPARE(x,y) (((x)<(y))?-1:((x)==(y))?0:1) 

typedef struct
{
	float coef;   //係數
	unsigned int expon; //次方
}polynomial;

polynomial terms[MAX_TERM] = { 0 };//陣列存多項式 
int avail = 0;//記錄下個可用的位置(足標) 

void attach(float coefficient, int exponent);

void padd(int startA, int finishA, int startB, int finishB, int* startD, int* finishD) // add A(x) and B(x) to obtain D(x)//*start_d、*end_d: call by reference 
//d的位置必須 call by reference
{
	*startD = avail;
	*finishD = avail - 1;
	while (startA <= finishA && startB <= finishB){ //(A and B are not end yet)
		switch (COMPARE(terms[startA].expon, terms[startB].expon)){
		case  1: attach(terms[startA].coef, terms[startA].expon);  // a expon > b expon                     
				startA++;//start_a 往後移，準備檢查下一個
				(*finishD)++;
				avail++;
				break;
		case -1: attach(terms[startB].coef, terms[startB].expon);  // a expon < b expon															   
				startB++;
				(*finishD)++;
				avail++;
				break;
		case 0: coefficient = terms[startA].coef + terms[startB].coef;  // a expon = b expon
			if (coefficient)
				attach(coefficient, terms[startA].expon);
			startA++;
			startB++;
			(*finishD)++;
			avail++;
			break;
		}
		for (; startA <= finishA; startA++){ //Add every A term which not been added into result
			attach(terms[startA].coef, terms[startA].expon);
			startA++;
			(*finishD)++;
			avail++;
		}
		for (; startB <= finishB; startB++){ //Add every B term which not been
			attach(terms[startB].coef, terms[startB].expon);
			startB++;
			(*finishD)++;
			avail++;
		}
		*finishD = avail - 1;
	}
}

void attach(float coefficient, int exponent){   //add a new terms to polynomial
	if (avail >= MAX_TERM)
		exit(EXIT_FAILURE);
	terms[avail].coef = coefficient;
	terms[avail++].expon = exponent;
}

void poly_multi(int start_a, int end_a, int start_b, int *start_m, int *end_m)
//m的位置必須 call by reference

{
	*start_m = avail;
	*end_m = avail;
	avail++;
	while(start_a <= end_a){
		terms[*end_m].expon = terms[start_a].expon + terms[start_b].expon;
		terms[*end_m].coef = terms[start_a].coef + terms[start_b].coef;
		start_a++;
		*start_m++;
		avail++; //下一個可用位置往後移
	}
}

void print(int b, int c)
{
	int i = 0;
	int temp = 0;
	if (i<avail - 1){
	if (terms[i].coef == 0){
		printf("%.2f ", terms[i].coef);
	 temp++;
		}
	else{
	 if (terms[i].expon == 0){
		 printf("%.2f ", terms[i].coef);
			}
	 else if (terms[i].expon == 1){
		 printf("%.2fx ", terms[i].coef);
			}
			 else{
				printf("%.2fx^%d ", p[i].coef, p[i].expon);
			}
		temp++;
		}
		for (i = 1; i<avail - 1; i++){
			if (terms[i].coef == 0){}
			else{
				if (terms[i].expon == 0){
					printf("%+.2f ", terms[i].coef);
				}
				if (terms[i].expon == 1){
					printf("%+.2fx ", terms[i].coef);
				}
				else{
					printf("%+.2fx^%d ", terms[i].coef, terms[i].expon);
				}
				temp++;
			}
		}
		
	}
	if (terms[i].coef == 0){}
	else{
		if (temp){
			if (terms[i].expon == 0){
				printf("%+.2f", terms[i].coef);
			}
			else if (terms[i].expon == 1){
				printf("%+.2fx", terms[i].coef);
			}
			else{
				printf("%+.2fx^%d", terms[i].coef, terms[i].expon);
			}
		}
		else{
			if (terms[i].expon == 0){
				printf("%.2f", terms[i].coef);
			}
			else if (terms[i].expon == 1){
				printf("%.2fx", terms[i].coef);
			}
			else{
				printf("%.2fx^%d", terms[i].coef, terms[i].expon);
			}
		}
	}
	 i++;
	printf("\n");
	temp = 0;
	if (i< avail + avail-1 - 1){
		if (terms[i].coef == 0){
			printf("%.2f ", terms[i].coef);
			temp++;
		}
		else{
			if (terms[i].expon == 0){
				printf("%.2f ", terms[i].coef);
			}
			else if (terms[i].expon == 1){
				printf("%.2fx ", terms[i].coef);
			}
			else{
				printf("%.2fx^%d ", terms[i].coef, terms[i].expon);
				}
			temp++;
			}
		for (i = avail + 1; i< + avail-1 - 1; i++){
			if (terms[i].coef == 0){}
			else{
				if (terms[i].expon == 0){
					printf("%+.2f ", terms[i].coef);
				}
				else if (terms[i].expon == 1){
					printf("%+.2fx ", terms[i].coef);
				}
				else{
					printf("%+.2fx^%d ", terms[i].coef, terms[i].expon);
				}
				temp++;
			}
		}
	}
	if (terms[i].coef == 0){}
	else{
		if (temp){
			if (terms[i].expon == 0){
				printf("%+.2f", terms[i].coef);
			}
			else if (terms[i].expon == 1){
				printf("%+.2fx", terms[i].coef);
			}
			else{
				printf("%+.2fx^%d", terms[i].coef, terms[i].expon);
			}
		}
		else{
			if (terms[i].expon == 0){
				printf("%.2f", terms[i].coef);
			}
			else if (terms[i].expon == 1){
				printf("%.2fx", terms[i].coef);
			}
			else{
				printf("%.2fx^%d", terms[i].coef, terms[i].expon);
				}
			}
		}
	i++;
	printf("\n");
	int point;
		point = b +1;
	temp = 0;
	if (point<c - 1){
		if (point->expon == 0){
			printf("%.2f ", point->coef);
		}
		else if (point->expon == 1){
			printf("%.2fx ", point->coef);
		}
		else{
			printf("%.2fx^%d ", point->coef, point->expon);
		}
		point++;
		temp++;
		for (; point<c - 1; point++){
			if (point->coef == 0){}
			else{
				if (point->expon == 0){
					printf("%+.2f ", point->coef);
					}
				else if (point->expon == 1){
					printf("%+.2fx ", point->coef);
					}
				else{
					printf("%+.2fx^%d ", point->coef, point->expon);
				}
	}
		}
		}
	if (point->coef == 0){}
	else{
		if (temp){
			if (point->expon == 0){
				printf("%+.2f", point->coef);
				}
			else if (point->expon == 1){
				 printf("%+.2fx", point->coef);
				}
			else{
				printf("%+.2fx^%d", point->coef, point->expon);
				}
			}
		else{
			if (point->expon == 0){
				printf("%.2f", point->coef);
				}
			else if (point->expon == 1){
				printf("%.2fx", point->coef);
				}
			else{
				printf("%.2fx^%d", point->coef, point->expon);
				}
			}
		}
}

int main(){
	int startA, endA, startB, endB, startD, endD;//startA: 紀錄 A 多項式在陣列中開始的位置(足標)； endA: 紀錄 A 多項式在陣列中結束的位置(足標) 
	startA = avail;
	polynomial*terms = startA;  //讀A多項式到p[]
	avail + 1;
	avail--;//avail 會多 1 
	endA = avail - 1;


	startB = avail;
	讀B多項式到p[]
		每讀一個字元avail + 1
		avail--;//avail 會多 1 

	endB = avail - 1;

	printf("A=");
	print(startA, endA);

	printf("B=");
	print(startB, endB);

	padd(startA, endA, startB, endB, &startD, &endD);
	printf("A+B=D=");
	print(startD, endD);

	int startE, endE, startF, endF, startG, endG;
	poly_multi(startD, endD, startB, &startE, &endE);
	poly_multi(startD, endD, startB + 1, &startF, &endF);
	padd(startE, endE, startF, endF, &startG, &endG);
	for (int i = startB + 2; i <= endB; i++)
	{

		poly_multi(startD, endD, i, &startF, &endF);
		padd(startF, endF, startG, endG, &startG, &endG);
	}

	printf("(A+B)*B=");
	print(startG, endG);
	return 0;
}

