//��ʽ ���� *������(������)
#include<stdio.h>

float *search(float (*pointer)[4],int n){
	
	float *pt;
	pt=*(pointer+n);//pointer+n����ָ��
					//*(pointer+n)��n��n��Ԫ�صĵ�ַ
	return pt;//���صĵ�n�е�0��Ԫ�صĵ�ַ 
	
} 

main(){
	
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *p;
	int k,i;
	scanf("%d",&k);
	p=search(score,k);
	for(i=0;i<4;i++)
		printf("%f\n",*(p+i));
	
}


