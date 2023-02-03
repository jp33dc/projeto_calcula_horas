/*
Huxley
*/
#include <stdio.h>

int main()
{
	float horas, minutos, total;
	scanf("%f%f", &horas, &minutos);
	total = horas + minutos / 60;
	printf("%f", total);
	return 0;
}