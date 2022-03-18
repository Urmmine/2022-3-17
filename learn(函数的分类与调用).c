#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数的分类


//库函数：频繁大量使用的功能

//strcpy()用于复制字符串

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//memset()内存设置
//void * memeset(viod * ptr,int value,size_t num)

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//自定义函数

//函数名+函数参数+函数的返回类型

/*
ret_type fun_name(para1, *)
{
	statement;//语句项
}
ret_type 返回类型
fun_name 函数名
para1 函数参数
*/


//输出两个整数的最大值

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回较大值
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a,b);
//
//	printf("%d\n", max);
//
//	return 0;
//}


//不改变a和b的值，只需知道最大值（一个数），不用取地址



//交换两个整型变量的内容

//函数返回类型的地方为viod，表示这个函数不返回任何值
//改变了a和b的值，需借助指针

//void Swap(int* pa , int* pb)                       //传址调用
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
//	//写一个函数 - 交换两个整型变量的值
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(&a, &b);
//	//取地址，让参量能够操作a和b
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//函数的参数

/*a和b，& a和& b为实参，函数真实传递过去的参数
	可以是常量，变量，表达式，函数等,但必须有确定的值传给形参

x和y，pa和pb为形参，函数名后括号内的变量,被调用时才被实例化(分配内存单元)
	函数调用完后自动销毁
*/


//err - 无法执行

//被调用时，实参传给形参，形参是实参的<临时拷贝>
//改变形参，不能改变实参

//void Swap(int x, int y)                          //传值调用
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
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	Swap(a, b);
//
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//判断一个数是不是素数

//int is_prime(int n)
//{
//	//2 - n-1 之间的数字
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
//	//100 - 200间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//打印1000 - 2000年中的闰年

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
 

//二分查找

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
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到返回 -1
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1

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