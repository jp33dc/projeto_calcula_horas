/*
Huxley
*/
#include <stdio.h>

int main()
{
	int horas, minutos, total;
	scanf("%i%i", &horas, &minutos);
	total = horas * 60 + minutos;
	printf("%d",total);
	return 0;
}