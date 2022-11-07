#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	double* a;
	long i = 0;
	char ch = 'Y';

	a = (double*) malloc(sizeof(double));
	do {
		a = (double*) realloc(a, (i + 1) * sizeof(double));
		printf("Enter a float number - a[%ld]: ", i + 1);
		scanf("%lf", a + i);

		while(getchar() != '\n');
		printf("Enter 'Y' to enter more number, otherwise press any other key: ");
		scanf("%c", &ch);
		i++;
	}
	while(ch == 'Y');

	free(a);
	return 0;
}
