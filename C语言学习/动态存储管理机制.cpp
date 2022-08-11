//存储分配函数mallloc
/*
函数功能 
分配长度为size的连续空间(存储块)
返回指向这个存储块的指针
如果存储申请不能被满足
函数将返回空指针 
*/

//calloc函数
/*
函数功能 
分配长度为size的连续存储区(用于保存数组)
如果存储申请不能被满足
函数将返回空指针 
*/ 
//malloc和calloc的主要区别
//calloc分配的空间全部初始化为0
//动态存储释放函数free
/*
函数功能
释放指针p所指的存储块
这个存储块必须是以前通过动态存储分配函数分配而来 
*/ 
//分配调整函数realloc 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	int n,m;
	double *date,*date1;
	scanf("%d%d",&n,&m);//读入需要处理的数据的个数 
	date=(double*)malloc(n *sizeof(double));
	date1=(double*)calloc(n,sizeof(double));
	if(date==NULL){//出问题的处理 
		
		
	}
	else{//对读入的数据进行处理 
		
		
	}
	int *p;
	p=(int*)malloc(n*sizeof(int));
	free(p);
	double *p1,*q;
	p1=(double*)calloc(n,sizeof(double));
	q=(double*)realloc(p1,m*sizeof(double));
	if(q==NULL){//分配未成功，p仍然指向原存储块 
		
	}
	else{
		p1=q;
		//分配成功，通过p可以使用具有新大小的存储块 
	} 
} 
