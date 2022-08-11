//从键盘输入一些字符，并逐个把他们送到磁盘上去，直到用户输入一个“#”为止
#include<stdio.h>
#include<stdlib.h> 

int main(){
	
	FILE *fp;
	char ch,filename[100];
	scanf("%s",filename);// D:\cc\file.dat
	getchar();
	fp=fopen(filename,"w");
	
	if(fp==NULL){
		
		printf("cannot open file\n");
		exit(0);
		
	}
	
	ch=getchar();
	
	while(ch!='#'){
		
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
		
	}
	
	fclose(fp);
	putchar(10);
	return 0;
	
}
