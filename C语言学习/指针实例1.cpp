//���ַ����е��ַ��Ĵ�ȡ--�±귨
#include<stdio.h>
main(){
	char a[]="Program",b[20];
	int i;
	for(i=0;a[i]!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';
	printf("%s\n%s",a,b);	
} 

