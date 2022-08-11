#include<stdio.h>
#include<stdlib.h>
#define N 5
struct StuInfo{
	
	char name[100];
	int num;
	int age;
	
}stu[N];

main(){
	
	FILE *fp;
	int i;
	char filename[100];
	scanf("%s",filename);
	getchar();
	fp=fopen(filename,"wb+");
	
	if(fp==NULL){
		
		printf("cannot open file");
		exit(0);
		
	}
	
	for(i=0;i<N;i++)
		scanf("%s%d%d",stu[i].name,&stu[i].num,&stu[i].age);
	fwrite(&stu[0],sizeof(struct StuInfo),N,fp);
	
	for(i=0;i<N;i++){
		
		fread(&stu[i],sizeof(struct StuInfo),1,fp);
		printf("%-10s%6d%4d\n",stu[i].name,stu[i].num,stu[i].age);
		
	}
	
	fclose(fp);
	
}

