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

	if (!f) {
		fprintf(stderr, "Error open file\n");
		return 1;
	}

	if (!fgets(buf, BUFSIZ, f)) {
		fprintf(stderr, "Error read file\n");
		return 1;
	}
	fclose(f);

	int i = 0;
	while (buf[i] != NULL) {
		buf[i] = tolower(buf[i]);
		i++;
	}
	size_t count = 0;
	for (char *ptr = strtok(tolower(buf), DELIM); ptr; ptr = strtok(NULL, DELIM)) {
		if (!strcmp(ptr, WORD)) ++count;
		//if (!strcmp(tolower(ptr), tolower(WORD))) ++count;
	}

	printf("Count %s: %zu\n", WORD, count);

	system("pause");
	return 0;
}