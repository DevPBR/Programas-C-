#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vis, vss, vts, vqs, vqus, vcr, dscm, acrh, idd, idc;   //acrh = acréscimo se homem
    char sx, grg, uct;                      //dscm = Desconto se mulher

    printf("Digite o Valor do carro: \n");
    scanf("%f", &vcr);
    getchar();
    printf("Digite seu genero: 'H' Homem 'M' Mulher ");
    scanf("%c", &sx);
    getchar();
    printf("Digite se tem garagem: 'S' sim 'N' nao ");
    scanf("%c", &grg);
    getchar();
    printf("Digite se usa o carro para trabalhar: 'S' Sim 'N' Nao ");
    scanf("%c", &uct);
    printf("Digite a idade do carro: \n");
    scanf("%f", &idc);
    printf("Digite a idade do cliente: \n");
    scanf("%f", &idd);

    vis = vcr * 0.05;

    if(sx == 'H' && idd < 25 && grg == 'N' && uct == 'S')
    {
    vss = vis * 1.040;
        if(idc >= 10)
        {
            vts = vss *1.005;
            printf("O valor sera: .2%f", vts);
        }
        if(idc <= 10)
        {
            printf("O valor sera: %.2f", vss);
        }
    }
    if(sx == 'H' && idd < 25 && grg == 'S' && uct == 'S')
    {
        vss = vis * 1.035;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'H' && idd < 25 && grg == 'N' && uct == 'N')
    {
        vss = vis * 1.02;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'H' && idd < 25 && grg == 'S' && uct == 'N')
    {
        vss = vis * 1.015;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'H' && idd > 25 && grg == 'N' && uct == 'S')
    {
    vss = vis * 1.025;
        if(idc >= 10)
        {
            vts = vss *1.005;
            printf("O valor sera: %.2f", vts);
        }
        if(idc <= 10)
        {
            printf("O valor sera: %.2f", vss);
        }
    }
    if(sx == 'H' && idd > 25 && grg == 'S' && uct == 'S')
    {
        vss = vis * 1.02;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'H' && idd > 25 && grg == 'N' && uct == 'N')
    {
        vss = vis * 1.005;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'H' && idd > 25 && grg == 'S' && uct == 'N')
    {
        vss = vis * 1.0;
            if(idc >=10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f", vss);
            }
    }
    if(sx == 'M' && idd < 25 && grg == 'N' && uct == 'N')
    {
        vss = vis * 0.999;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd < 25 && grg == 'S' && uct == 'S')
    {
        vss = vis * 1.009;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd < 25 && grg == 'N' && uct == 'S')
    {
        vss = vis * 1.019;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd < 25 && grg == 'S' && uct == 'N')
    {
        vss = vis * 0.989;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
    if(sx == 'M' && idd > 25 && grg == 'N' && uct == 'N')
    {
        vss = vis * 0.994;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd > 25 && grg == 'S' && uct == 'S')
    {
        vss = vis * 1.004;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd > 25 && grg == 'N' && uct == 'S')
    {
        vss = vis * 1.014;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }
     if(sx == 'M' && idd > 25 && grg == 'S' && uct == 'N')
    {
        vss = vis * 0.84;
            if(idc >= 10)
            {
                vts = vss*1.005;
                printf("O valor sera: %.2f \n", vts);
            }
            if(idc <= 10)
            {
                printf("O valor sera: %.2f \n", vss);
            }
    }

    return 0;
}
