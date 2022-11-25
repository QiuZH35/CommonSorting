

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
void initialization(int* p)
{
	for (int i = 0; i < N; i++)
	{
		*(p+i)=rand() % 100;
	}

}
void show(int* p)
{
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		printf("%4d", *(p + i));
	}


}


void XZsort(int* p)
{
	int kmax = *(p+0);			//假设第一个元素最大

	for (int i = 0; i < N; i++)
	{
		kmax = i;                //遍历下标
		for (int j = i+1; j < N; j++)
		{
			if (*(p+kmax) > *(p + j))    //获取最大值的下标
			{
				kmax = j;
			}


		}
		if (kmax != i)    //数据逐个交换
		{
			int temp = *(p + kmax);
			*(p + kmax) = *(p + i);
			*(p + i) = temp;

		}
	}
}


void gotosort(int* p);
void sort(int* p);
void main()
{
	srand((unsigned int)time(NULL));
	int a[N] = { 0 };
	initialization(a);
	show(a);

	int kmax = a[0];    // 假设第一个元素最大
	//for (int i = 0; i < N-1; i++)
	//{
	//	kmax = i;                          //获取下标
	//	for (int j = 1+i; j < N; j++)
	//	{
	//		if (a[kmax]>a[j])              //获取最大数的下标
	//		{
	//			kmax = j;         
	//		}


	//	}
	//	if (kmax != i)                    //交换最大数  
	//	{
	//		int temp = a[kmax];
	//		a[kmax] = a[i];
	//		a[i] =temp;
	//	}



	//}


	//int i = 0;
	//while (i < N-1)
	//{
	//	kmax = i;
	//	int j = i + 1;
	//	while (j < N)
	//	{
	//		if (a[kmax] > a[j])
	//		{
	//			kmax = j;
	//		}

	//		j++;

	//	}
	//	if (kmax != i)
	//	{
	//		int temp = a[kmax];
	//		a[kmax] = a[i];
	//		a[i] = temp;
	//	}


	//	i++;
	//}

//	int i = 0;
//AAA:
//	if (i < N - 1)
//	{
//		kmax = i;
//		int j = i + 1;
//	BBB:
//		if (j < N)
//		{
//			if (a[kmax] > a[j])
//			{
//				kmax = j;
//			}
//
//
//			j++;
//			goto BBB;
//
//		}
//
//		if (kmax != i)
//		{
//			int temp = a[kmax];
//			a[kmax] = a[i];
//			a[i] = temp;
//		}
//
//		i++;
//		goto AAA;
//	}

	//XZsort(a);
	//gotosort(a);


	sort(a);
	show(a);



	system("pause");
}





void gotosort(int* p)
{
	int kmax = *(p + 0);
	int i = 0;
AAA:
	if (i < N)
	{
		kmax = i;    //下标遍历
		int j = i+1;
	BBB:
		if (j < N)
		{

			if (*(p + kmax) > *(p + j))
			{
				kmax = j;
			}


			j++;
			goto BBB;
		}
		if (kmax != i)  //数据交换
		{
			int temp = *(p + kmax);
			*(p + kmax) = *(p + i);
			*(p + i) = temp;


		}




		i++;
		goto AAA;
	}




}

void sort(int* p)
{
	int kmax = *p;
	for (int i = 0; i < N; i++)
	{
		kmax = i;
		for (int j = i + 1; j < N; j++)
		{
			if (*(p + kmax) > *(p + j))
			{
				kmax = j;
			}


		}
		if (kmax != i)
		{
			int temp = *(p + kmax);
			*(p + kmax) = *(p + i);
			*(p + i) = temp;
		}


	}


}