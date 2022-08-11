#include<stdio.h>
struct student1 {

	int grade;
	int age;
};

void print(struct student1 stud) {

	printf("%d %d\n",stud.age,stud.grade);

}

void print1(struct student1 *p) {

	printf("%d %d\n",(*p).age,(*p).grade);
	printf("%d %d\n",p->age,p->grade);

}

main() {

	struct student1 stu;
	stu.age=10;
	stu.grade=100;
	print(stu);
	print1(&stu); 

}
