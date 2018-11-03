#include <stdio.h>
#include <math.h>

double function(double x)
{
	return 1/(1-cos(x));
}

void main() {
	
	float a, b, n;

	printf_s("Input a = ");
	scanf_s("%f",&a);

	printf_s("Input b = ");
	scanf_s("%f", &b);

	printf_s("Input n = ");
	scanf_s("%f", &n);

	printf_s("%f", a);

	

	for (float i = a; i <= b; i += n) {
		printf_s( "\nF(x) = %f ", function(i) );

	}


	getchar();
	getchar();
}