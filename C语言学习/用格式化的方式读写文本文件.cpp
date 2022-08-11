#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp;
	char filename[100];
	scanf("%s",filename);
	getchar();
	fp=fopen(filename,"w");
	
	if(fp==NULL){//NULL，值为0，一般表示打开文件失败
	//还有EOF，值为-1，一般表示文件结束或处理文件时出错 
		
		printf("cannot open file");
		exit(0);
		
	}
	
	int i=100;
	fprintf(fp,"%d",i);
	fscanf(fp,"%d",i);
	fclose(fp);
	
	
}
