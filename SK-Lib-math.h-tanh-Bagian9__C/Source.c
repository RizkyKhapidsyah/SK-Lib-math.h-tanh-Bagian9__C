// crt_tanh.c
// This program displays the tangent of pi / 4
// and the hyperbolic tangent of the result.
// Compile by using: cl crt_tanh.c

#include <math.h>
#include <stdio.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double pi = 3.1415926535;
	double x, y;

	x = tan(pi / 4);
	y = tanh(x);

	printf("tan( %f ) = %f\n", pi / 4, x);
	printf("tanh( %f ) = %f\n", x, y);

	_getch();
	return 0;
}