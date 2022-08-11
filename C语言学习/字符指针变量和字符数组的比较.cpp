//比较
#include<stdio.h>
#include<stdio.h> 
main(){
	//1.类型、大小不同
	char a[]="I love China!";//数组a占据14个字符的空间 
	char *string1="I love China!",*string2=string1;//指针string只占据1个指针所需要的存储空间
	//2.赋值方式不同
	char str[14];
//	str="I love China!";// 这是非法的，只能用循环对各个元素赋值，不能整体赋值 
	gets(str);//这个东西好奇怪呀，而且下面打印确实竟然把没有付给 
	for(int i=0;i<14;i++)
		printf("%c",str[i]);
	printf("%s",str);
//	printf("%c %c",string1[5],*(string1+5));//好奇怪呀，这里不是指向一个静态的东西吗 
} 
