#include <stdio.h>
#include <iostream>
#include <conio.h>

void max(int mass[], int size) {
	int max = mass[0];
	for (int i = 1; i<size; i++)
		if (mass[i]>max) {
			max = mass[i];
		}

	printf("\nmax=%d", max);
}

void min(int mass[], int size) {
	int min = mass[0];
	for (int i = 1; i<size; i++)
		if (mass[i]<min) {
			min = mass[i];
		}
	printf("\nmin=%d", min);
}

void average(int mass[], int size) {
	int av;
	int sum = 0;
	for (int i = 0; i<size; i++)
	{
		sum += mass[i];
	}
	av = sum / size;
	printf("\naverage=%d", av);
}

int main() {

	int mass[] = {1,2,3,4,5,6,7,8};
	int size = sizeof(mass) / sizeof(int);

	/*for (int i = 0; i<8; i++)
	{
		printf("mass[%d] = ", i);
		scanf_s("%d", &mass[i]);
	}*/

	max(mass,size);
	min(mass,size);
	average(mass, size);
	

	getchar();
}