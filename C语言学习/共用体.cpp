
//��C��������һ�ֹ���������������ͬ���͵�����ʹ�ù�ͬ���ڴ���������ǹ�����
//�ṹ�壺ÿ����Ա�����Լ������Ĵ洢λ��
//�����壺���г�Ա������һ��λ�ÿ�ʼ�Ĵ洢������������ÿ��ʱ��ֻ�ܱ�������һ����Աֵ
/*
����������κ�ʱ��ֻ��һ����Ա����
�����������������ڴ棬����=���Ա��ռ�ֽ��� 
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
	
	union date a={5};//��ȷ
//	a={3,'h',2.1,2.6666};���� 
	a={.ch='h'};//��ȷ 
	printf("%d\n%d",sizeof(date),sizeof(student));

} 
