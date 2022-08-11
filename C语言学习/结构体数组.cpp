#include<stdio.h>
main(){
	
	struct student{
		
		char name[100];
		int age;
		int grade;
		
	}stu[]={{"xiaomi",15,100},{"xiaoho",16,99},{"xi",17,98}};
	
	printf("%d",stu[0].grade);
}
