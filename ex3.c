#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int a[n];
	int* p = a;
	for(int i = 0; i < n; i++)
		scanf("%d", (p + i));

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum = sum + *(p + i);

	printf("%d", sum);

	return 0;
}
