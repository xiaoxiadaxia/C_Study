//强制类型转换并不改变原表达式的值与类型
#include<stdio.h>

main(){
	
	int num1=42;
	float num2=52.6;
	printf("%d   %f\n",num1,(float)num1);
	printf("%f   %d",num2,(int)num2);
	
} 
