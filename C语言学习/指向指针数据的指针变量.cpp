//格式：类型名 **变量名;
#include<stdio.h>

main(){
	
	char **p;
	//*p前面的*，表示指针变量p是指向一个字符指针变量(即 指向字符型数据的指针变量)
	//引用时，*p就是p所指向的另一个指针变量
	char *name[]={"follow me","basic","Great wall","NULL","NULL"};
	p=name+2;//p指向指针数组的下标为2的元素
	printf("%o\n%d\n",*p,*p);//输出name[2]的值(是一个地址) 
	printf("%s\n",*p);//以字符串形式输出"Great wall" 
	for(int i=0;i<5;i++){
		
		p=name+i;
		printf("%s\n",*p);
		
	}
	//p是指向指针的指针
	//p=name+1;
	//使p指向name数组的第i号元素name[i]
	//*p是name的值，即第i个字符串的起始地址 
} 
