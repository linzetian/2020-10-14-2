////编写函数不允许使用创建临时变量，求字符串的长度（用递归函数实现）
#include<stdio.h>
int my_strlen(char* n)
{
	if (*n != '\0')
	{
		return 1 + my_strlen(n + 1);
	}
	else
	return 0;
}
int main()
{
	char arr[] = "bit";
	int len= my_strlen(arr);
	printf("len=%d\n",len);
	return 0;
}