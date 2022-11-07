#include <stdio.h>
#include <string.h>

int main() {
	char str1[10000];
	scanf("%s", str1);

	int length = strlen(str1);
	char str2[length + 1];
	for(int i = 0; i <= length; i++)
		str2[i] = str1[i];

	printf("%s", str2);
	return 0;
}
