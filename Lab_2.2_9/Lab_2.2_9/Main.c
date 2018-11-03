//gcc 5.4.0

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define DELIM " "
#define WORD "hello"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char buf[BUFSIZ];
	/*printf_s("Enter the search word: ");
	char *WORD = NULL;
	size_t len;
	if (getline(&buf, &len, stdin) == -1 && ferror(stdin))
	err(1, "getline");*/

	FILE *f = fopen("test.txt", "r");
	FILE *f1 = fopen("out.txt", "w");

	if (!f) {
		fprintf(stderr, "Error open file\n");
		return 1;
	}

	if (!fgets(buf, BUFSIZ, f)) {
		fprintf(stderr, "Error read file\n");
		return 1;
	}
	fclose(f);

	char out[BUFSIZ];
	
	int i = 0, j = 0;
	while (buf[i] != NULL) {
		if (isdigit(buf[i])) {
			//out[j] = buf[i];
			//j++;
			fputc(buf[i], f1);
		}
		i++;
	}
	printf_s("123");

	system("pause");
	return 0;
}