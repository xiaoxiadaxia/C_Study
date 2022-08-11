
//在C语言中有一种构造数据类型允许不同类型的数据使用共同的内存区域，这就是共用体
//结构体：每个成员都有自己独立的存储位置
//共用体：所有成员共享由一个位置开始的存储区。共用体在每个时刻只能保存它的一个成员值
/*
共用体变量任何时刻只有一个成员存在
共用体变量定义分配内存，长度=最长成员所占字节数 
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

	union date{
		
		int i;
		char ch;
		float f;
		double d;
		
	};
	
	struct student{
		
		char name[20];
		double grade;
		
	};
	
	union date a={5};//正确
//	a={3,'h',2.1,2.6666};错误 
	a={.ch='h'};//正确 
	printf("%d\n%d",sizeof(date),sizeof(student));

} 
