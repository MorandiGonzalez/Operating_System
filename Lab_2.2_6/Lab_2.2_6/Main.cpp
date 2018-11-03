#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)



void main() {

	FILE *file;
	FILE *file2;
	char arr[2048];

	file = fopen("fscanf.txt", "r");
	file2 = fopen("out.txt", "w");
	int i = 0;
	while ((arr[i] = fgetc(file)) != EOF) {
		if (arr[i] == '\n') {
			arr[i] = '\0';
			printf("%s\n", arr);
			if (arr[i] >= 100 && arr[i] <= 110)
				continue;
			putc(arr[i], file2);
			i = 0;
		}
		else {
			if (arr[i] >= 100 && arr[i] <= 110)
				continue;
			putc(arr[i], file2);
			i++;
		}	
	}
	arr[i] = '\0';
	printf("%s\n", arr);

	char prom;
	while (!feof(file)) {
		prom = fgetc(file);
		putc(prom, file2);
	}


	getchar();
	getchar();
}