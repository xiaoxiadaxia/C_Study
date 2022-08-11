//从键盘读入若干个字符串，对它们按字母大小的顺序排序，然后把排好序的字符串送到磁盘文件中保存
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	FILE *fp;
	char str[3][10],temp[10];
	int i,j,k,n=3;
	for(i=0;i<3;i++)
		gets(str[i]);
	for(i=0;i<n-1;i++){
		
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(str[k],str[j])>0)k=j;
			
			if(k!=i){
				
				strcpy(temp,str[i]);
				strcpy(str[i],str[k]);
				strcpy(str[k],temp);
				
			}
		
	}
	
	char filename[100];
	scanf("%s",filename);
	fp=fopen(filename,"w");
	
	if(fp==NULL){
		
		printf("cannot open file\n");
		exit(0);
		
	}
	
	for(i=0;i<n;i++){
		
		fputs(str[i],fp);
		fputs("\n",fp);
		printf("%s\n",str[i]);
		
	}
	
	fclose(fp);
	
	return 0;	
	
} 
