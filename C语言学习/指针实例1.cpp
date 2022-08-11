//对字符串中的字符的存取--下标法
#include<stdio.h>
main(){
	char a[]="Program",b[20];
	int i;
	for(i=0;a[i]!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';
	printf("%s\n%s",a,b);	
} 

