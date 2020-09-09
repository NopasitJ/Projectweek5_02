#include<stdio.h>
long long fact(int n);
int main()
{
	int i, m, row, j;
	long long term;
	printf("Enter Number of row : ");
	scanf_s("%d", &row);
	for (i = 0; i < row; i++)
	{
		for (j = i; j <= row; j++)
		{
			printf("%3c", ' ');
		}
		for (m = 0; m <= i; m++)
		{
			term = fact(i) / (fact(m) * fact(i - m));
			printf("%6lld", term);
		}
		printf("\n");
	}
	return 0;
}

long long fact(int n)
{
	long long factorials = 1ll;
	while (n >= 1)
	{
		factorials *= n;
		n--;
	}
	return factorials;
}