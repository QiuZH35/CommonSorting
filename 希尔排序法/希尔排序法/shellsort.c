


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


void initalition(int* p)
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


void shellsort(int* p)
{
	int d = N / 2;   //����
	while (d >= 1)
	{
		for (int i = d; i <N && d < N; i++)
		{
			int x = p[i];//����
			int j = i - d;
			while (j >= 0 && p[j] > x)     //�±��0��ʼ�����Ա���ҪС�ڵ���0
			{
				p[j + d] = p[j];
				j = j - d;

			}
			p[j + d] = x; //����

		}



		d--;  //�����ݼ�
	}


}

void shellsortgoto(int* p)
{
	int d = N / 2;
AAA:
	if (d >= 1)
	{
		int i = d;
	BBB:
		if (i < N && d < N)
		{
			int x = p[i];
			int j = i - d;
		CCC:
			if (j >= 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j -= d;
				goto CCC;
			}
			p[j + d] = x;


			i++;
			goto BBB;
		}


		d /= 2;
		goto AAA;
	}


}

void whilesort(int* p);
void main()
{
	srand((unsigned int)time(NULL));
	int a[N] = { 0 };
	initalition(a);
	show(a);
	//shellsort(a);
	shellsortgoto(a);
	
	//whilesort(a);
	
	show(a);






	system("pause");
}

void whilesort(int *p)
{
	int d = N / 2;
	while (d >= 1)
	{
		int i = d;
		while (i < N && d < N)
		{
			int x = p[i];
			int j = i - d;
			while (j >= 0 && p[j] > x)
			{
				p[j + d] = p[j];
				j -= d;
			}
			p[j + d] = x;


			i++;
		}


		d--;
	}




}