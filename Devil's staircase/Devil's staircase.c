#include <stdio.h>
#include <math.h>

#define N 100
#define INF 5

void stairs(double *a, int x1, int x4, int cnt)
{
	int i;
	int x2 = (x4 + 2 * x1) / 3;
	int x3 = (2 * x4 + x1) / 3;

	double c = 1.0 / pow(2.0, (double)cnt);

	for (i = x1; i <= x2; i++)
		a[i] -= c;
	for (i = x3; i <= x4; i++)
		a[i] += c;

	cnt++;

	if (cnt < INF) {
		stairs(a, x1, x2, cnt);
		stairs(a, x3, x4, cnt);
	}
}

int main(void)
{
	double a[N + 1];

	int i;

	/*--- 全ての要素を1/2に設定 ---*/
	for (i = 0; i <= N; i++)
		a[i] = 1.0 / 2;

	/*--- 悪魔の階段生成 ---*/
	stairs(a, 0, N, 2);

	/*--- 表示 ---*/
	for (i = 0; i <= N; i++)
		printf("%d %.3f\n", i, a[i]);

	return 0;
}