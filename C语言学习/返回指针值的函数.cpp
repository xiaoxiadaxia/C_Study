//格式 类型 *函数名(参数表)
#include<stdio.h>

float *search(float (*pointer)[4],int n){
	
	float *pt;
	pt=*(pointer+n);//pointer+n是行指针
					//*(pointer+n)是n行n列元素的地址
	return pt;//返回的第n行第0列元素的地址 
	
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


