#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	
	char *str_p;
	str_p=(char*)malloc(20*sizeof(char));//动态申请长度为20个字节的内存
	if(str_p==NULL){//如果申请失败，退出程序
		
		exit(1); 
		
	} 
	
	strcpy(str_p,"shortstring");
	printf("%s\n",str_p);
	str_p=(char*)realloc(str_p,40*sizeof(char));
	strcpy(str_p,"shortstringshortstringshortstr");
	printf("%s",str_p);
	
}
