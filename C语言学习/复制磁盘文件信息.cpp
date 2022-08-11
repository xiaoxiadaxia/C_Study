#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *in,*out;
	char ch,infile[100],outfile[100];
	scanf("%s\n%s",infile,outfile);
	getchar();
	in=fopen(infile,"r");
	
	if(in==NULL){
		
		printf("cannot open infile\n");
		exit(0);
		
	}
	
	out=fopen(outfile,"w"); 
	
	if(out==NULL){
		
		printf("cannot open outfile\n");
		exit(0);
		
	}
	
	ch=fgetc(in);
	
	while(!feof(in)){
		
		fputc(ch,out);
		putchar(ch);
		ch=fgetc(in);
		
	}
	
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
	
}
