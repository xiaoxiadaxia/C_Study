//�洢���亯��mallloc
/*
�������� 
���䳤��Ϊsize�������ռ�(�洢��)
����ָ������洢���ָ��
����洢���벻�ܱ�����
���������ؿ�ָ�� 
*/

//calloc����
/*
�������� 
���䳤��Ϊsize�������洢��(���ڱ�������)
����洢���벻�ܱ�����
���������ؿ�ָ�� 
*/ 
//malloc��calloc����Ҫ����
//calloc����Ŀռ�ȫ����ʼ��Ϊ0
//��̬�洢�ͷź���free
/*
��������
�ͷ�ָ��p��ָ�Ĵ洢��
����洢���������ǰͨ����̬�洢���亯��������� 
*/ 
//�����������realloc 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
	
	int n,m;
	double *date,*date1;
	scanf("%d%d",&n,&m);//������Ҫ��������ݵĸ��� 
	date=(double*)malloc(n *sizeof(double));
	date1=(double*)calloc(n,sizeof(double));
	if(date==NULL){//������Ĵ��� 
		
		
	}
	else{//�Զ�������ݽ��д��� 
		
		
	}
	int *p;
	p=(int*)malloc(n*sizeof(int));
	free(p);
	double *p1,*q;
	p1=(double*)calloc(n,sizeof(double));
	q=(double*)realloc(p1,m*sizeof(double));
	if(q==NULL){//����δ�ɹ���p��Ȼָ��ԭ�洢�� 
		
	}
	else{
		p1=q;
		//����ɹ���ͨ��p����ʹ�þ����´�С�Ĵ洢�� 
	} 
} 
