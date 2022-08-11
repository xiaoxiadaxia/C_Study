//一维指针数组定义：
//类型名 *数组名[数组长度];
#include<stdio.h>
main(){
	
	char a[]="Fortran";
	char b[]="Lisp";
	char c[]="Basic";
	char *p[4];
	p[0]=a;p[1]=b;p[2]=c;p[3]=NULL;
	for(int i=0;i<4;i++){
		
		printf("%s\n",p[i]);
		
	}
	char *name[2]={"gain","much"};
	
	
	
} 
//二维数组与指针数组区别
//1.二维数组存储空间固定 
//2.字符指针数组相当于可变列长的二维数组
//3.指针数组元素的作用相当于二维数组的行名，但是指针是变量
//4.二维数组的行名是地址常量 
