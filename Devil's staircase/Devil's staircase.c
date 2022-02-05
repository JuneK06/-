#include <stdio.h>
#include <math.h>

#define N 100

void stairs(double *a, int x1, int x4)
{
	int cnt = 0;
	int x2 = (x4 + 2 * x1) / 3;
	int x3 = (2 * x4 + x1) / 3;
}

int main(void)
{
	double a[N];

	int i;

	for (i = 0; i < N; i++)
		a[i] = 1.0 / 2;

	for (i = 0; i <= N / 3; i++)
		a[i] -= 1.0 / 4;

	for (i = 2*N/3; i < N; i++)
		a[i] += 1.0 / 4;

	for (i = 0; i < N; i++)
		printf("%d %.3f\n", i, a[i]);

	return 0;
}