#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp1,*fp2;
	char str[3][10],filename[100],filename1[100];
	int i=0;
	scanf("%s",filename);
	getchar();
	scanf("%s",filename1);
	getchar();
	fp1=fopen(filename,"r");//D:\cc\string.dat
	fp2=fopen(filename1,"w");//D:\cc\string1.dat
	
	if(fp1==NULL){
		
		printf("cannot open file");
		exit(0);//ÍË³ö³ÌÐò 
		
	}
	
	
	if(fp2==NULL){
		
		printf("cannot open file");
		exit(0);
		
	}
	
	while(fgets(str[i],10,fp1)!=NULL){
		
		fputs(str[i],fp2);
		printf("%s",str[i]);
		i++; 
		
	}
	
	fclose(fp1);
	fclose(fp2);
}
