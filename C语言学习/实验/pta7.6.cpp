 
#include<stdio.h>


int measure(int x, int y)//��x��y�����Լ����շת�������
{
	int z = y;
	while (x % y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}

int main()
{	
	int n;
	scanf("%d", &n);//scnaf_S����vs�����ʹ�õģ�����ᱨ���������ط�����ֱ��ʹ��scanf��
	while (n--) {
		int a0, a1, b0, b1;
		scanf("%d %d %d %d", &a0, &a1, &b0, &b1);
		int cut = 0;
		int p = a0 / a1;
		int q = b1 / b0;
		for (int i = 1; i * i<= b1; i++) {
			if (b1 % i == 0) //��һ����ȷ��i��b1Լ��
			{
				if (i % a1 == 0 && measure(p, i / a1) == 1 && measure(b1 / i, q) == 1)
					cut++;
				int y = b1 / i;
				if (i == y)
					continue;
				if (y % a1 == 0 && measure(p, y / a1) == 1 && measure(b1 / y, q) == 1)
					cut++;
			}
		}
		printf("%d\n", cut);
	}
	return 0;
}
 

