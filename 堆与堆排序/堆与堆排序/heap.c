
#include <stdio.h>
#include <stdlib.h>


void show(int* arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%4d", *(arr + i));
	}
	printf("\n");

 }


void findmax(int* arr, int size)  //交换数据
{
	for (int i = size - 1; i > 0; i--)  //
	{
		int parent = i / 2;
		int child = i; //记录下标

		if (i < size - 1 && arr[i] < arr[i + 1]) //取出左右最大值
		{

			child++;

		}
		if (arr[child] > arr[parent])  //获取最大值
		{
				int temp = arr[child];
				arr[child] = arr[parent];
				arr[parent] = temp;
		}
	}



}



void heapposts(int* arr, int size) //大顶堆
{
	for (int i = 0; i < size; i++)
	{
		findmax(arr, size - i);

	}

}




void heappost(int* arr, int size) //小顶堆
{
	for (int j = size; j >0; j--)
	{
		findmax(arr, j);


		int temp = arr[0];
		arr[0] = arr[j -1];
		arr[j - 1] = temp;

	}



}



void main()
{
	int arr[10] = { 126,26,45,123,61,23,124,423,56,89 };
	show(arr, 10);
	//findmax(arr, 10);

	heappost(arr, 10);
	show(arr, 10);



	system("pause");
}