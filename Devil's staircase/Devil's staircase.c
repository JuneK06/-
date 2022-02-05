﻿#include <stdio.h>

#define N 100

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