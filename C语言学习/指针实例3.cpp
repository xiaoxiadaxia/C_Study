//���� 
#include<stdio.h>
//1.�β�ʵ�ζ�Ϊ�ַ����� 
void copy_string1(char from[],char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
	printf("%s\n%s",from,to); 
} 
//2.�β�Ϊ�ַ����飬ʵ��Ϊָ��
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
��ֵ�ھ�̬�洢��--���ɸĶ���dָ�����ָ���Ǿ�̬�洢�����Ӷ�copy_string2�е��β�to[]�޷��ı䣬�������г��� 
*/
	printf("%s\n%s\n",c,d);
	char *e=d;
	copy_string2_2(c,e);//�����eָ��ָ���Ƕ�̬�洢�����ɸĶ� 
	char *f=c;
	copy_string2_3(f,e);//�����a,bָ�����ָ�ľ��Ƕ�̬�洢�����ɸĶ� 
	copy_string3(a,b);
}
