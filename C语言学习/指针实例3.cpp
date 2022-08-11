//传递 
#include<stdio.h>
//1.形参实参都为字符数组 
void copy_string1(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
	printf("%s\n%s",from,to); 
} 
//2.形参为字符数组，实参为指针
void copy_string2_1(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
	printf("%s\n%s\n",from,to); 
}  
void copy_string2_2(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
	printf("%s\n%s",from,to); 
} 
void copy_string2_3(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
	printf("%s\n%s",from,to); 
} 
void copy_string3(char *from,char *to){
	int i=0;
	while(*from!='\0'){
		*to=*from;
		from++;
		to++;
	}
	to='\0'; 
} 
main(){
	char a[]="I am a teacher";
	char b[]="I am a student";
	printf("%s\n%s\n",a,b);
	copy_string1(a,b);
	char *c="I am a teacher";
	char *d="I am a student";
//	copy_string2_1(c,d);
/*
初值在静态存储区--不可改动，d指针变量指的是静态存储区，从而copy_string2中的形参to[]无法改变，导致运行出错 
*/
	printf("%s\n%s\n",c,d);
	char *e=d;
	copy_string2_2(c,e);//这里的e指针指的是动态存储区，可改动 
	char *f=c;
	copy_string2_3(f,e);//这里的a,b指针变量指的均是动态存储区，可改动 
	copy_string3(a,b);
}
