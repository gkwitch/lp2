#include <stdio.h>

int	main(void)
{
	float	v1;
        float	v2;
	int	opt;
	
	printf("Selecione uma opção:\n"
		"1- km/h p/ m/s\n"
		"2- km/h p/ Milhas/h\n"
		"3- m/s p/ km/h\n"
		"4- m/s p/ Milhas/h\n"
                "5- Milhas/h p/ km/h\n"
                "6- Milhas/h p/ m/s\n");
        scanf("%d", &opt);
        printf("Digite o valor da velocidade: \n");
        scanf("%f", &v1);

        if (opt == 1)
        {
                v2 = v1 / 3.6;
                printf("%.2f m/s\n", v2);
        }
        else if (opt == 2)
        {
                v2 = v1 / 1.60934;
                printf("%.2f mph\n", v2);
        }
        else if (opt == 3)
        {
                v2 = v1 * 3.6;
                printf("%.2f km/h\n", v2);
        }
        else if (opt == 4)
        {
                v2 = (v1 * 3.6) / 1.60934;
                printf("%.2f mph\n", v2);
        }
        else if (opt == 5)
        {
                v2 = v1 * 1.60934;
                printf("%.2f km/h\n", v2);
        }
        else if (opt == 6)
        {
                v2 = (v1 * 1.60934) / 3.6;
                printf("%.2f m/s\n", v2);
        }

        return (0);
}

