//��ʽ�������� **������;
#include<stdio.h>

main(){
	
	char **p;
	//*pǰ���*����ʾָ�����p��ָ��һ���ַ�ָ�����(�� ָ���ַ������ݵ�ָ�����)
	//����ʱ��*p����p��ָ�����һ��ָ�����
	char *name[]={"follow me","basic","Great wall","NULL","NULL"};
	p=name+2;//pָ��ָ��������±�Ϊ2��Ԫ��
	printf("%o\n%d\n",*p,*p);//���name[2]��ֵ(��һ����ַ) 
	printf("%s\n",*p);//���ַ�����ʽ���"Great wall" 
	for(int i=0;i<5;i++){
		
		p=name+i;
		printf("%s\n",*p);
		
	}
	//p��ָ��ָ���ָ��
	//p=name+1;
	//ʹpָ��name����ĵ�i��Ԫ��name[i]
	//*p��name��ֵ������i���ַ�������ʼ��ַ 
} 
