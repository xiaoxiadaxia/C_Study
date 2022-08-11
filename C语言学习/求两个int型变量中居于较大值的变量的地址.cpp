#include<stdio.h>
int *f1(int *x,int *y){
	
	if(*x>*y) return x;
	else	return y;
	
}

main(){
	
	int a,b;
	scanf("%d%d",&a,&b);
	int *p=(&a,&b);
	printf("%d\n",p);
	
}
