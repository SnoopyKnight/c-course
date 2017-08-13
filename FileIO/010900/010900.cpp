# include <stdio.h>
# include <stdlib.h>

struct info {
     unsigned int value;
     short int shift;
 }typedef info;

int main()
{
	char fname[100];
	printf("請輸入檔名：");
	scanf("%s",fname);
	FILE *fptr = fopen(fname,"rb");
	if (fptr == NULL){printf("開檔失敗\n");   exit(0);}
	fseek(fptr, 0, SEEK_END);
	int flen = ftell(fptr);
	int asize = flen / sizeof(info);
	info * iArray= (info *)malloc(asize * sizeof(info));
	if (iArray==NULL) { exit(0); }
	rewind(fptr);
	fread( iArray,sizeof(info),asize,fptr);
	fclose(fptr);
	int i,j=0;
	printf("執行 shift 運算前...\n");
	for(i=0;i<asize;i++){
	printf("iArray[%d].value = %d, shift = %d\n",i,iArray[i].value,iArray[i].shift);
	
	if(iArray[i].shift < 0)
		iArray[i].value = iArray[i].value >> -iArray[i].shift;
	else if(iArray[i].shift >= 0)
		iArray[i].value = iArray[i].value << iArray[i].shift;
	}
	printf("\n");
	printf("執行 shift 運算後...\n");
	for(j=0;j<asize;j++)
		printf("iArray[%d].value = %d\n",j,iArray[j].value);
	
	system("pause");
	return 0;
}