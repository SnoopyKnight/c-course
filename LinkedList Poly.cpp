# include <stdio.h>
# include <stdllib.h>

typedef struct poly_node  *poly_pointer;

struct poly_node{
	float coef;  //係數
	int expon;  //次方
	poly_pointer link;  //鏈結 
	//// equal to "poly_node*
};

void print(poly_node*a){
	int i=0;
	poly_node *ptr;
	for(ptr=a->link ; ptr!=NULL ; ptr=ptr->link){
		if(i==0){
			if(ptr->expon > 1){
				if(ptr->coef != 0)
					printf("%.2fx^%d", ptr->coef , ptr->expon);
			}
			else if(ptr->expon==1){
				if(ptr->coef != 0)
					printf("%.2fx",ptr->coef);
			}
			else{
				if(ptr->coef != 0)
					printf("%.2fx",ptr->coef);
			}
			i++;
		}
		else if(ptr->expon == 1){  
            if(ptr->coef >0 )  
                printf(" +%.2fx",ptr->coef);  
            else if(ptr->coef <0)  
                printf(" %.2fx",ptr->coef);  
        }  
        else if(ptr->expon > 1){  
            if(ptr->coef >0 )  
                printf(" +%.2fx^%d",ptr->coef, ptr->expon);  
            else if(ptr->coef <0)  
                printf(" %.2fx^%d",ptr->coef, ptr->expon);  
        }  
          
        else{  
            if(ptr->coef >0 )  
                printf(" +%.2f",ptr->coef);  
            else if(ptr->coef <0 )  
                printf(" %.2f",ptr->coef);  
        }  
	}
	printf("\n");
}

int main()
{
	poly_node *a ,*b,*c;
	poly_node *ptr , *ptr_a, *ptr_b, *ptr_c;
	poly_pointer temp;
	int A,B,i;
	scanf("%d",&A);
	a = ( poly_pointer ) malloc ( sizeof ( poly_node ) );
	b = ( poly_pointer ) malloc ( sizeof ( poly_node ) );
	c = ( poly_pointer ) malloc ( sizeof ( poly_node ) );
	for(i=0, ptr=b; i<B; i++){
		temp= ( poly_pointer ) malloc ( sizeof ( poly_node ) );
		scanf("%f%d",&temp->coef, &temp->expon);
		temp->link = NULL;
		ptr->link = temp;
		ptr = temp;
	}
	print(a);  
    print(b);
	for(i=0,0


