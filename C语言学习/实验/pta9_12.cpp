#include<stdio.h>
#include<string.h>

int my_strlen(char* str)       //数组传参实际上是传递数组首地址
{
	int count = 0;    //计数
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int sort(int a[],int k)
{
	int i=0,j=0,temp=0;
	int seat=0; 
	for(i=0;i<k-1;i++)
	{
		seat=i;
		j=i+1;
		while(j<k)
		{
			if(a[seat]<a[j])
			{
				seat=j;
			}
			j++;
		 }
		 if(seat!=i)
		  {
		  	temp=a[i];
			  a[i]=a[seat];
			  a[seat]=temp;
		  } 
	}
	return a[0];
}

int main(){
    
    char a[5000]={0},b[5000]={0};
    gets(a);
    gets(b);
   	int k=my_strlen(b);
   	printf("%d",k);
    int sum=0,sumadd[k]={0},i=0;
    for(int l=0;l<k;l++,i=0){
        
	for(;a[i]!='\0';i++){
        
		for(int j=i;b[j]!='\0';j++){
			
			
			if((a[i]=='A'&&b[j]=='U')||(a[i]=='U'&&b[j]=='A')){
			
				sumadd[k]+=3;
				break;
				 
			}

			if((a[i]=='C'&&b[j]=='G')||(a[i]=='G'&&b[j]=='C')){
			
				sumadd[k]+=2;
				break;
				 
			}
							
		}
		
	}
        if(a[i]=='\0'){
            continue;
        }
    
}
	
	printf("%d",sort(sumadd,k));
    return 0;  
}
