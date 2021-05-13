#include <stdio.h>
void print_my(int num,int *p)
{
	int a, b,c, i,n=0;
	
	if (num == 0)
	{
		printf("该数字为0.\n");
	}
	a =c= num;     //创建临时变量防止值被改变
	//统计位数:
	while (a)
	{
		n++;
		a /=10;
		
	}
	printf("该数字的长度为:%d\n", n);
	//从个位开始分离输出:(逆序输出)
	for (i = 0; i < n; i++)
	{
		b = num % 10;       //创建临时变量接收每一位的数.
		printf(" %d ", b);
		num /= 10;
	}
	//从第一位开始向后输出:
	//利用指针指向并存储NUM的值然后用数组进行输出
	printf("\n");
	for (i = 0; i < n; i++)
	{
		*(p + i) = c% 10;
		c /= 10;
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf(" %d ", *(p + i));
	}
	
}
int main(void)
{
	int num;
	int n[100];//创建临时数组进行数据存储.
	printf("Please enter anumber:");
	scanf_s("%d", &num);
	print_my(num,n);  //截取位数函数.
}