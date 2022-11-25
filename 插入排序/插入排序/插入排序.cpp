

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N  10


void initialization(int* p) //��ʼ��
{
	for (int i = 0; i < N; i++)
	{
		*(p + i) = rand() % 100;
	}
}

void show(int* p)
{
	printf("\n\n");
	for (int i = 0; i < N; i++)
	{
		printf("%4d", *(p + i));
	}
}


void sort(int* p)
{
	int i = 1;
	while (i < N)
	{
		int temp = p[i];
		int j = i;
		while (j > 0 && p[j-1] > temp)
		{
			p[j] = p[j - 1];
			j--;
		}
		p[j] = temp;


		i++;
	}




}




void charusort(int* p);
void whilesort(int* p);
void forsort(int* p);
void main()
{
	srand((unsigned int)time(NULL));
	int a[N] = { 0 };
	initialization(a);
	show(a);

	//for (int i = 1; i < N; i++)  //���ʣһλ�����ƶ���ֻ���ƶ��Ŵ�
	//{
	//	int temp = a[i];
	//	int j = i;			  //ÿ���ƶ�����һλ������ף�����j�趨Ϊi��
	//	while (j > 0 && a[j-1] > temp)   //С�ں���һλ�������ƶ�
	//	{
	//		a[j] = a[j - 1];    //����ƶ�

	//		j--;
	//	}
	//	a[j] = temp;
	//}

//	int i = 1;
//AAA:
//	if (i < N)
//	{
//
//		int temp = a[i];
//		int j = i;
//	BBB:
//		if (j > 0 && a[j - 1] > temp)
//		{
//			a[j] = a[j - 1];
//
//
//			j--;
//			goto BBB;
//		}
//		a[j] = temp;
// 
//
//		i++;
//		goto AAA;
//	}

	//int i = 1;
	//do {

	//	int temp = a[i];
	//	int j = i;
	//	do {
	//		if (a[j - 1] > temp)  //do while �Ƚ����⣬��Ҫ���ڲ�����һ���ж�
	//		{
	//			a[j] = a[j - 1];
	//		}
	//		j--;
	//	} while ( j>0 &&a[j-1]>temp);

	//	a[j] = temp;
	//	
	//	i++;
	//} while (i < N);



	//charusort(a);
	//whilesort(a);

	forsort(a);
	show(a);


}

void charusort(int* p)
{
	int i = 1;
AAA:
	if (i < N)
	{
		int temp = *(p + i);
		int j = i;
	BBB:
		if (j > 0 && *(p + j - 1) > temp)
		{

			*(p + j) = *(p + j - 1);

			j--;
			goto BBB;
		}
		*(p + j) = temp;



		i++;
		goto AAA;
	}





}



void whilesort(int* p)
{
	int i = 1;
	while (i < N)
	{
		int temp = *(p + i);
		int j = i;
		while (j > 0 && *(p + j - 1) > temp)
		{
			*(p + j) = *(p + j - 1);
			j--;
		}
		*(p + j) = temp;

		i++;
	}

}

void forsort(int* p)
{
	for (int i = 1; i < N; i++)
	{
		int temp = p[i];
		int j = i;
		for ( ;j > 0 && p[j - 1] > temp; j--)
		{
			p[j] = p[j - 1];
			
		}
		p[j] = temp;

	}



}