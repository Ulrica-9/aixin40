#include <stdio.h>
void print_my(int num,int *p)
{
	int a, b,c, i,n=0;
	
	if (num == 0)
	{
		printf("������Ϊ0.\n");
	}
	a =c= num;     //������ʱ������ֵֹ���ı�
	//ͳ��λ��:
	while (a)
	{
		n++;
		a /=10;
		
	}
	printf("�����ֵĳ���Ϊ:%d\n", n);
	//�Ӹ�λ��ʼ�������:(�������)
	for (i = 0; i < n; i++)
	{
		b = num % 10;       //������ʱ��������ÿһλ����.
		printf(" %d ", b);
		num /= 10;
	}
	//�ӵ�һλ��ʼ������:
	//����ָ��ָ�򲢴洢NUM��ֵȻ��������������
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
	int n[100];//������ʱ����������ݴ洢.
	printf("Please enter anumber:");
	scanf_s("%d", &num);
	print_my(num,n);  //��ȡλ������.
}