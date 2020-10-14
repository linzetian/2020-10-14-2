//编写函数不允许使用创建临时变量，求字符串的长度（画图讲解）
#include<stdio.h>
#include<string.h>//自定义函数可不要
int my_strlen(char* arr)
{
	int count = 0;
	while(*arr != 0)
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	/*int len = strlen(arr);
	printf("len=%d\n",len);*/
	int len=my_strlen(arr);
	printf("len=%d\n",len);
	return 0;
}