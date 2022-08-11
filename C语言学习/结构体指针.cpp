#include<stdio.h>
main(){
	
	struct student{
		
		char name[100];
		int age;
		int grade;
		
	}stu;
	
	struct student *p=&stu;
	stu.grade=100;
	//使用结构体指针变量引用成员的形式
	(*p).grade=100;
	p->grade=100;//这三个是等价的 
}
//运算符->
//最高优先级：与圆点运算符、函数调用、数组元素访问[]一样
//结合方式：从左向右 
