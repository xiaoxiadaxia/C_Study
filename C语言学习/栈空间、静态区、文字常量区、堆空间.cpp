/*
栈空间
由编译器自动分配释放
存放函数的参数值，局部变量的值
其操作方式类似于数据结构中的栈 
*/
/*
静态区
全局变量和静态变量的存储是一起的
程序结束后有系统释放
包括初始化静态区和未初始化静态区 
*/
/*
文字常量区
常量字符串就是放在这里的
程序结束后由系统释放 
*/
/*
堆空间
一般由程序员分配释放
若程序员不释放，可能造成内存泄漏
注意它与数据结构中的堆是两回事
分配方式倒是类似于链表 
*/



#include<stdio.h>
#include<string.h>
int e;//未初始化静态区 
int f=200;//初始化静态区 
int main(int argc,char*argv[]){
	
	int a=100;//堆空间 
	
	const int b=100;//初始化静态区 
	
	static int c=200;//初始化静态区 
	
	static int g;
	
	char s1[]="abcdef";//栈空间 
	
	char *s1[]="abcdef";//abcdef为文字常量区 
	
	int *p=(int*)malloc(sizeof(int));//*p为栈空间  malloc为堆空间 
	
	char end=getchar();
	return 1;
}
