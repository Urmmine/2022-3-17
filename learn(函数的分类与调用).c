#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����ķ���


//�⺯����Ƶ������ʹ�õĹ���

//strcpy()���ڸ����ַ���

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//memset()�ڴ�����
//void * memeset(viod * ptr,int value,size_t num)

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//�Զ��庯��

//������+��������+�����ķ�������

/*
ret_type fun_name(para1, *)
{
	statement;//�����
}
ret_type ��������
fun_name ������
para1 ��������
*/


//����������������ֵ

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//���ؽϴ�ֵ
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a,b);
//
//	printf("%d\n", max);
//
//	return 0;
//}


//���ı�a��b��ֵ��ֻ��֪�����ֵ��һ������������ȡ��ַ



//�����������ͱ���������

//�����������͵ĵط�Ϊviod����ʾ��������������κ�ֵ
//�ı���a��b��ֵ�������ָ��

//void Swap(int* pa , int* pb)                       //��ַ����
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - �����������ͱ�����ֵ
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//	//ȡ��ַ���ò����ܹ�����a��b
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//�����Ĳ���

/*a��b��& a��& bΪʵ�Σ�������ʵ���ݹ�ȥ�Ĳ���
	�����ǳ��������������ʽ��������,��������ȷ����ֵ�����β�

x��y��pa��pbΪ�βΣ��������������ڵı���,������ʱ�ű�ʵ����(�����ڴ浥Ԫ)
	������������Զ�����
*/


//err - �޷�ִ��

//������ʱ��ʵ�δ����βΣ��β���ʵ�ε�<��ʱ����>
//�ı��βΣ����ܸı�ʵ��

//void Swap(int x, int y)                          //��ֵ����
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	Swap(a, b);
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//�ж�һ�����ǲ�������

//int is_prime(int n)
//{
//	//2 - n-1 ֮�������
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	//100 - 200�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//��ӡ1000 - 2000���е�����

//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	//return (((n % 4 == 0) && (n % 100 != 0)) || n % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
 

//���ֲ���

//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ������� -1
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1

void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}

//