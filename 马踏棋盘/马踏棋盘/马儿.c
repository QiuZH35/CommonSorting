

#include <stdio.h>
#include <stdlib.h>


int qp[5][5] = { 0 };//û���߹������Ϊ1

int xm[8] = { 1,1,2,2,-1,-1,-2,-2 };
int ym[8] = {2,-2,1,-1,2,-2,-1,1};   //������ܵ�8������



void show()
{
	static int ci = 0;
	printf("��%d��\n", ++ci);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (qp[i][j] == 1)
			{
				printf("��");
			}
			else
			{
				printf("��");
			}
		}
		printf("\n");
	}
}

int check(int x, int y)
{
	/*if (x < 0 || y < 0 || x>4 || y>4)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/

	if (x >= 0 && x <= 4 && y >= 0 && y <= 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


//a b����x y������ƶ���d����ݹ�Ĳ���
int findmove(int a, int b, int d)
{
	int xpos, ypos;//����λ��
	int flag = 0;
	for (int i = 0; i < 8; i++)
	{
		xpos = a + xm[i];
		ypos = b + ym[i]; //����8��
		if (qp[xpos][ypos] != 0)
		{
			
			continue;
			
		}
		if (check(xpos, ypos) == 1)
		{
			flag = 1;
			qp[xpos][ypos] = 1;
			show();
			int find= findmove(xpos, ypos, d + 1);
			/*if (find == 0)
			{

			}
			else
			{
				return;
			}*/
			
			//return 1;
		}
	}
	return flag;
}


void main()
{
	//show();
	qp[0][0] = 1;
	findmove(0, 0, 0);




	system("pause");
}