#include<stdio.h>
#include<math.h>

//这种方法好是好，但是不通用呀 
//那么就可以用函数指针变量调用函数 

//double f(double x){//f(x)的表达式，即被求根函数的原型 
//	
//	return x-2;
//}


 
double xpoint(double (* fp)(double),double x1,double x2){//求弦线与x轴的交点 
	
	double y1=(*fp)(x1),y2=(*fp)(x2);
	return (x1*y2-y1*x2)/(y2-y1); 
	
}

double root(double (* fp) (double) ,double x1,double x2){
	
	double x,y,y1=(*fp)(x1);
	do{
		
		x=xpoint(*fp,x1,x2);
		y=(*fp)(x);
		
		if(y*y1>0){
			
			x1=x;y1=y;
		} 
		else x2=x;
		
	}while(fabs(y)>=1e-6);
	
	return x;
	
}
main(){
	
//	double x1,x2;
//	scanf("%lf lf%",&x1,&x2);
//	printf("%lf",root(x1,x2));

	double X=root(sin,0.4,4.5);
	printf("%lf",X);
//或者
	double (*f)(double);
	f=cos;
	double Y=root(f,0.4,0.5);
	printf("\n%lf",Y); 
} 
