#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main() {

	printf_s("Enter the string: ");
	char str[1024];
	gets(str);

	for (int i = strlen(str)-1; i >= 0; i--) {
		printf_s("%c", str[i]);
	}


	getchar();
	getchar();
}