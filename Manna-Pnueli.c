#include <stdio.h>
#include <stdlib.h>
int n = -1, v[100];

int vf()
{
	if (v[n] > 0)
		return v[n];
	else 
		return -1;
}

int pop()
{
	if (v[n] > 0)
		return v[n--];
	else 
		return -1;
}

void push(int a) {
	if (n < 99)
		v[++n] = abs(a);
	else
		printf("Stiva este plina.\n");
}

int main()
{
	int x;
	printf("Stiva goala.\nIntroduceti o valoare in stiva:");
	scanf("%d", &x);
	push(x);
	while (1)
	{
		if (vf() >= 12)
		{
			int temp = pop();
			push(temp - 1);
			break;
		}
		else push(vf() + 2);
	}
	

	for (int i = 0; i <= n; i++)
		printf("%d ", v[i]);
	
	return 0;
}