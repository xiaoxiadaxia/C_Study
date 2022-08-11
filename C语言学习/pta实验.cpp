#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    getchar(); 
    char t[n][m]={0};
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%c",&t[i][j]);
		}
		getchar();
//		printf("%s",t[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(t[i][j]=='#'){
					if(t[i][j+1]=='*'){
						k=k+1;
					}
						
				}
			}
        }
    
    printf("%d",k);
   	return 0; 
}
