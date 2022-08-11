//#include<stdio.h>
//
//int Function(int n)//函数判断是否为素数
//{	
//	 for (int i=2; i<n; i++)
//    {
//        if ( n%i == 0 )
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int N;
//    
//    scanf("%d",&N);
//    for(int i=2; i<=N; i++)
//    {
//        if(Function(i)==1 && Function(i+2)==1)//判断i和i+2是否同为孪生素数
//        {
//            printf("%d %d",i,i+2);
//            break;
//        }
//    }
//
//
//    return 0;
//}
#include<stdio.h>
int Function(int n){
	if(n<=2)
		return 0;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
main(){
	int N;
	scanf("%d",&N);
	for(int i=N+1;;i++)
		if(Function(i)&&Function(i+2)){
			printf("%d %d",i,i+2);
			break;
		} 
}













