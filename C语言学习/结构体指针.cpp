#include<stdio.h>
main(){
	
	struct student{
		
		char name[100];
		int age;
		int grade;
		
	}stu;
	
	struct student *p=&stu;
	stu.grade=100;
	//ʹ�ýṹ��ָ��������ó�Ա����ʽ
	(*p).grade=100;
	p->grade=100;//�������ǵȼ۵� 
}
//�����->
//������ȼ�����Բ����������������á�����Ԫ�ط���[]һ��
//��Ϸ�ʽ���������� 
