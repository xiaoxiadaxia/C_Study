#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	
	char *str_p;
	str_p=(char*)malloc(20*sizeof(char));//��̬���볤��Ϊ20���ֽڵ��ڴ�
	if(str_p==NULL){//�������ʧ�ܣ��˳�����
		
		exit(1); 
		
	} 
	
	strcpy(str_p,"shortstring");
	printf("%s\n",str_p);
	str_p=(char*)realloc(str_p,40*sizeof(char));
	strcpy(str_p,"shortstringshortstringshortstr");
	printf("%s",str_p);
	
}
