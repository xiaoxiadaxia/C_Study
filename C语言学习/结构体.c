/*
对于结构体的成员也可以是一个结构体变量。即允许嵌套定义。
 
*/
#include<stdio.h>
struct date{
	int month;
	int day;
	int year;
};
struct student{
	int num;
	char name[20];
	int age;
	struct date brthday;//对于这种情况，多用个.就行了 
	char addr[30];
}s1,s2;
/*
对结构成员的访问使用原点运算符(.)描述。
该运算符具有最高的优先级，自左向右的结合方式。
该法称为点记法 
*/
/*
初始化
如果初始化描述中数据的个数不够，其余结构成员自动用0进行初始化 
*/
/*
结构体数组 
*/
/*
指向结构体变量的指针
使用结构体指针变量引用成员 
*/
