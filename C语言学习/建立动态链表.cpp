#include<stdio.h>
#include<stdlib.h>
//��LEN����struct student�������ݵĳ��� 
#define LEN sizeof(struct student)

struct student{
	
	long num;
	float score;
	struct student *next;
	
};

int n;

//������̬������

struct student *creat(){
	
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld,%f",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0){
		
		n++;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);//��������Ϊp1����洢�� 
		scanf("%ld,%f",&p1->num,&p1->score);
		
	}
	
	p2->next=NULL;
	return(head);
	
} 

//���������

void print(struct student *head){
	
	struct student *p;
	printf("\nNow, These %d are :\n",n);
	p=head;
	if(p!=NULL)
	do{
		
		printf("%ld%5.1lf",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
	
}

//������ 
struct student *insert(struct student *head,struct student *stud){
	
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stud;
	if(head==NULL){
		
		head=p0;
		p0->next=NULL;
		
	}
	
	else{
		
		while((p0->num>p1->num)&&(p1->next!=NULL)){
			
			p2=p1;
			p1=p1->next;
			
		}
		
		if(p0->num<=p1->num){
			
			if(head==p1)head=p0;
			else p2->next=p0;
			p0->next=p1;
			
		}
		
		else{
			
			p1->next=p0;
			p0->next=NULL;
			
		}
		
	}
	
	n++;
	return(head);
	
}

//ɾ�����

void delete_node(struct student*head,int i){
	
	struct student *p1,*p2;
	int j;
	p1=head;
	for(j=1;j<i&&p1->next!=NULL;++j){
		
		p2=p1;
		p1=p1->next;
		
	}
	
	if(j==i){
		
		p2->next=p1->next;
		free(p1);
		
	}
} 
 
main(){
	
	struct student *head;
	head=creat();
	print(head);
	
}


