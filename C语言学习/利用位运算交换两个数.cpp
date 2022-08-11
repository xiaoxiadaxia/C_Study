#include<stdio.h>

main(){
	
	int a=4,b=5;//a=a1,b=b1;
	a=a^b;//a=a^b=a1^b1; 
	b=a^b;//b=a^b=a1^b1^b1=a1^0=a1;
	a=a^b;//a=a^b=a1^a1=a1=b;
	printf("%d  %d ",a,b);
	
}
