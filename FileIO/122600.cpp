# include <stdio.h>
# include <stdlib.h>

int main()
{
	char fname[1000];
	printf("�п�J�ɦW�G");
	scanf("%s",fname);
	int asize;
	printf("�}�C�����h�֭Ӿ�ơH");
	scanf("%d",&asize);
		int *number=(int *)malloc(asize*sizeof(int));
		if (number==NULL) { exit(0);}
	
	FILE *fptr = fopen(fname,"rb");
		if (fptr == NULL)	{ printf("�}�ɥ���\n");return 0;}
		fread(number,sizeof(int),asize,fptr);
		fclose(fptr);

	number[0]=-1;number[2]=-999;
	fopen(fname,"wb");
	fwrite(number,sizeof(int),asize,fptr);
	int i,sum=0;
		for(i=0;i<asize;i++)
			sum+=number[i];
	printf("�`�M�O %d�C\n",sum);

	system("pause");
	return 0;
}