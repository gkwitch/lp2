#include <stdio.h>

int     main(void)
{
        float   p1;
        float   p2;
        int     opt;

        printf("Selecione uma opção:\n"
                "1- atm p/ Pascal\n"
                "2- atm p/ bar\n"
                "3- atm p/ psi\n"
                "4- Pascal p/ atm\n"
                "5- Pascal p/ bar\n"
                "6- Pascal p/ psi\n"
                "7- bar p/ atm\n"
                "8- bar p/ Pascal\n"
                "9- bar p/ psi\n"
                "10- psi p/ atm\n"
                "11- psi p/ Pascal\n"
                "12- psi p/ bar\n");
        scanf("%d", &opt);
        printf("Digite o valor da pressão: \n");
        scanf("%f", &p1);

        if (opt == 1)
        {
                p2 = p1 * 101325.0;
                printf("%.6f Pa\n", p2);
        }
        else if (opt == 2)
        {
                p2 = p1 * 1.01325;
                printf("%.6f bar\n", p2);
        }
        else if (opt == 3)
        {
                p2 = p1 * 14.6959;
                printf("%.6f psi\n", p2);
        }
        else if (opt == 4)
        {
                p2 = p1 / 101325.0;
                printf("%.6f atm\n", p2);
        }
        else if (opt == 5)
        {
                p2 = p1 / 100000.0;
                printf("%.6f bar\n", p2);
        }
        else if (opt == 6)
        {
                p2 = p1 / 6894.757;
                printf("%.6f psi\n", p2);
        }
        else if (opt == 7)
        {
                p2 = p1 / 1.01325;
                printf("%.6f atm\n", p2);
        }
        else if (opt == 8)
        {
                p2 = p1 * 100000.0;
                printf("%.6f Pa\n", p2);
        }
        else if (opt == 9)
        {
                p2 = p1 * 14.503774;
                printf("%.6f psi\n", p2);
        }
        else if (opt == 10)
        {
                p2 = p1 / 14.6959;
                printf("%.6f atm\n", p2);
        }
        else if (opt == 11)
        {
                p2 = p1 * 6894.757;
                printf("%.6f Pa\n", p2);
        }
        else if (opt == 12)
        {
                p2 = p1 * 0.0689476;
                printf("%.6f bar\n", p2);
        }

        return (0);
}

