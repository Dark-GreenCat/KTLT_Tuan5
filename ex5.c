#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	char str1[10000], str2[10000];
	printf("Enter first string - str1: ");
	scanf("%s", str1);
	printf("Enter second string - str2: ");
	scanf("%s", str2);

	int L1 = strlen(str1),
		L2 = strlen(str2);

	bool isSame = true;
	if(L1 != L2)
		isSame = false;
	else {
		for(int i = 0; i < L1; i++) {
			if(str1[i] != str2[i]) {
				isSame = false;
				break;
			}
		}

	}

	if(isSame)
		printf("str1 == str2");
	else
		printf("str1 != str2");

	return 0;
}
