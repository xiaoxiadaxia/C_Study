#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp;
	char filename[100];
	scanf("%s",filename);
	getchar();
	fp=fopen(filename,"w");
	
	if(fp==NULL){//NULL��ֵΪ0��һ���ʾ���ļ�ʧ��
	//����EOF��ֵΪ-1��һ���ʾ�ļ����������ļ�ʱ���� 
		
		printf("cannot open file");
		exit(0);
		
	}
	
	int i=100;
	fprintf(fp,"%d",i);
	fscanf(fp,"%d",i);
	fclose(fp);
	
	
}
