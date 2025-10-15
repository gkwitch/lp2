#include <stdio.h>

int	main(void)
{
	float	v1;
	float	v2;
	int	opt;

	printf("Selecione uma opção:\n"
		"1- Celsius p/ Fahrenheit\n"
		"2- Celsius p / Kelvin\n"
		"3- Kelvin p/ Fahrenheit\n"
		"4- Kelvin p/ Celsius\n"
		"5- Fahrenheit p/ Celsius\n"
		"6- Fahrenheit p/ Kelvin\n");
	scanf("%d", &opt);
	printf("Digite o valor: \n");
	scanf("%f", &v1);

	if (opt == 1)
	{
		v2 = (v1 * 1.8) + 32;
		printf("%.2fF\n", v2);
	}
	else if (opt == 2)
	{
		v2 = v1 + 273.15;
		printf("%.2fK\n", v2);
	}
	else if (opt == 3)
	{
		v1 -= 273.15;
		v2 = (v1 * 1.8) + 32;
		printf("%.2fF\n", v2);
	}
	else if (opt == 4)
	{
		v2 = v1 - 273.15;
		printf("%1.fC\n", v2);
	}
	else if (opt == 5)
	{
		v2 = (v1 - 32) / 1.8;
		printf("%.1fC\n", v2);
	}
	else if (opt == 6)
	{
		v1 = (v1 - 32) / 1.8;
		v2 = v1 + 273.15;
		printf("%2.fK\n", v2);
	}

	return (0);
}
