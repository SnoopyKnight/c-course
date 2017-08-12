#include <stdio.h>

int mine[10][10];
bool candidate[10][10][10]; 
void initSudoku() {																											// �]�w�D��
	int i,j,mine[i][j];
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			mine[i][j]={0};
		}
	}
	mine[1][1] = 5; mine[1][2] = 3; mine[1][5] = 7;
	mine[2][1] = 6; mine[2][4] = 1; mine[2][5] = 9; mine[2][6] = 5;
	mine[3][2] = 9; mine[3][3] = 8; mine[3][8] = 6;
	mine[4][1] = 8; mine[4][5] = 6; mine[4][9] = 3;
	mine[5][1] = 4; mine[5][4] = 8; mine[5][6] = 3; mine[5][9] = 1;
	mine[6][1] = 7; mine[6][5] = 2; mine[6][9] = 6;
	mine[7][2] = 6; mine[7][7] = 2; mine[7][8] = 8;
	mine[8][4] = 4; mine[8][5] = 1; mine[8][6] = 9; mine[8][9] = 5;
	mine[9][5] = 8; mine[9][8] = 7; mine[9][9] = 9;
}																	 

void printGameField()                                                                                                       // �ɥΦ۽�a�p�C���L�X�e�� 
{
	printf("�z");
	int x,y,i,j;
	for(x=0;x<8;x++)
	{
			printf("�w�s");
	}
	printf("�w�{\n");
		
	for(y=1;y<=9;y++)
	{
		for(i=1;i<=9;i++)
		{	
			if(mine[y][i]==-1)
				printf("�x��");
			else if(mine[y][i]==0)
				printf("�x  ");
			else
				printf("�x%2d",mine[y][i]);
		}
		printf("�x");
		printf("\n");
		if(y==9)
		{
			printf("�|");
			for(x=0;x<8;x++)
			{
				printf("�w�r");
			}	
		}
		else
		{
			printf("�u");
			for(j=0;j<8;j++)
			{
				printf("�w�q");
			}
			printf("�w�t\n");
		}
	}
			printf("�w�}");
}
																		

void removeCandidate(int i, int j, int value)                                    
{
	int a,b;                                                             // �� mine[i][j] �T�w��J value, ��L��N����� 
	for(a=0;a<=9;a++)  candidate[i][a][value]==false;                    //�P�@�C�� candidate[??][??][value] �אּ false 
	for(b=0;b<=9;b++)  candidate[b][j][value]==false;                    //�P�@�椧 candidate[??][??][value] �אּ false 
	if(i%3==0)  a=(i/3)*3-2;                                             //�P�@�c�� candidate[a][b][value] �אּ false
	else if(i%3!=0) b=(i/3)*3+1;                                         // a, b ���_�׽d��i�� i, j ��X 
	for(;a<a+3;a++)
	{
		for(;b<b+3;b++)
			candidate[i][j][value]==false;
	}
}



void startFindSolution() 
{
	int i,j,k;																	//���� candidate[1][1][1] ~ candidate[9][9][9] ���]�� true 
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				for(k=1;k<=9;k++)
					candidate[i][j][k]==true;
			}
		}
		if(mine[i][j]!=0)                                                     //�ˬd�C�@�� mine[i][j] //mine[i][j] ���Ȫ��ɭԩI�s removeCandidate(...)

		{
			removeCandidate(i,j,value);
		}
}


int solveByOnlyOne() { 
//�ˬd�C�@�� mine[i][j] 
//�� mine[i][j] �S���ȦӥB�u���@�ض�k 
//mine[i][j] ��J�� 
//�I�s removeCandidate(...) 
return 1; 
return 0; 


int main() { 
    initSudoku(); 
    printGameField(); 
    startFindSolution(); 
    int yes = 1; 
    while (yes > 0) { 
        yes = 0; 
        yes += solveByOnlyOne();         // yes += otherSolution(); // add other solutions in the future 
    } 
    printGameField(); 
    return 0; 
} 
