//建立静态链表：将若干个静态结点链接成链表的结构 


#include<stdio.h>
struct TeleType{
	
	char name[30];
	char phoneNum[15];
	struct TelType *nextadder;
	
};
void display(struct TeleType *p){
	
	while(p!=NULL){
		
		printf("%s%s",p->name,p->phoneNum);
		p=p->nextadder;
		
	}	
	
} 

main(){
	
	struct TeleType t1={"a1","a2"};
	struct TeleType t2={"a3","a4"};
	struct TeleType t3={"a5","a6"};
	struct TeleType *head,*p;
	
	head=&t1;
	t1.nextadder=&t2;
	t2.nextadder=&t3;
	t3.nextadder=NULL;//建立静态链表 
	
	p=head;
	while(p!=NULL){
		
		printf("%s%s",p->name,p->phoneNum);
		p=p->nextadder;
		
	}//访问/遍历链表 
	
//	display(p);
}
