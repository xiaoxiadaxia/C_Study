//�Ƚ�
#include<stdio.h>
#include<stdio.h> 
main(){
	//1.���͡���С��ͬ
	char a[]="I love China!";//����aռ��14���ַ��Ŀռ� 
	char *string1="I love China!",*string2=string1;//ָ��stringֻռ��1��ָ������Ҫ�Ĵ洢�ռ�
	//2.��ֵ��ʽ��ͬ
	char str[14];
//	str="I love China!";// ���ǷǷ��ģ�ֻ����ѭ���Ը���Ԫ�ظ�ֵ���������帳ֵ 
	gets(str);//������������ѽ�����������ӡȷʵ��Ȼ��û�и��� 
	for(int i=0;i<14;i++)
		printf("%c",str[i]);
	printf("%s",str);
//	printf("%c %c",string1[5],*(string1+5));//�����ѽ�����ﲻ��ָ��һ����̬�Ķ����� 
} 
