#include<stdio.h>
#include<string.h>

void sort(char *name[],int n){
	
	char *temp;
	int i=0,j=0,k=0;
	for(i=0;i<n-1;i++){
		
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])>0)k=j;//其实这里比较的就是首字母的ASCII值的大小 
		if(k!=i){
								
			temp=name[i];name[i]=name[k];name[k]=temp;
			
		}
		
	
}
}
void print(char *name[],int n){
	
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
	
}

main(){
	
	char *name[]={"me","b","greatwall","dawd","aa"};
	int n=5;
	sort(name,n);
	print(name,n);
	printf("%d\n%d\n%d\n%d",name[0],name[1],name[2],name[3]);
	
}

