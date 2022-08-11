#include<stdio.h>

int min(int m,int n){
    
    if(m>n)return 2*n;
    else return 2*m;
    
}

int suppose(int m){
    
    if(m==0||m==1)
        return 0;
    else
        return 2*m-2;
    
}
int main(){
    
    int first=0,second=0,third=0,forth=0;
    scanf("%d %d\n%d %d",&first,&second,&third,&forth);
    int total=0,sum=first+second+third+forth;
    total=sum*6-suppose(first)-suppose(second)-suppose(third)-suppose(forth);
    total=total-min(first,second)-min(second,forth)-min(third,forth)-min(first,third);
    printf("%d",total);
    return 0;
    
}
