#include <stdio.h>

int Nlinhasvnh;
int Flinha, Ccoluna;
int casasVisitadas = 0;
int casasPercorridas = 0;
int passo = 1;
void exibeMatriz()
{
    int i, j, valor;
    for (i = 0; i < Nlinhasvnh; i++)
    {
        for (j = 0; j < Nlinhasvnh; j++)
        {
            valor = (i * Nlinhasvnh) + (j + 1);
            printf("%3d", valor);
        }
        printf("\n");
    }
}
int main()
{
    scanf("%d", &Nlinhasvnh);
    scanf("%d%d", &Flinha, &Ccoluna);

    if (Ccoluna >= 0 && Ccoluna < Nlinhasvnh && Flinha >= 0 && Flinha < Nlinhasvnh)
    {
        printf("%d ", ((Flinha * Nlinhasvnh) + (Ccoluna + 1)));
        casasVisitadas++;
    }
    casasPercorridas++;
        while (casasVisitadas < (Nlinhasvnh * Nlinhasvnh))
    {
        int k;
        if (passo % 2 != 0)
        {
            for (k = 0; k < passo; k++)
            {
                if (casasVisitadas < (Nlinhasvnh * Nlinhasvnh))
                {
                    Ccoluna++;
                    casasPercorridas++;
                    if (Ccoluna >= 0 && Ccoluna < Nlinhasvnh && Flinha >= 0 && Flinha < Nlinhasvnh)
                    {
                        printf("%d ", ((Flinha * Nlinhasvnh) + (Ccoluna + 1)));
                        casasVisitadas++;
                    }
                }
            }
            for (k = 0; k < passo; k++)
            {
                if (casasVisitadas < (Nlinhasvnh * Nlinhasvnh))
                {
                    Flinha++;
                    casasPercorridas++;
                    if (Ccoluna >= 0 && Ccoluna < Nlinhasvnh && Flinha >= 0 && Flinha < Nlinhasvnh)
                    {
                        printf("%d ", ((Flinha * Nlinhasvnh) + (Ccoluna + 1)));
                        casasVisitadas++;
                    }
                }
            }

            passo++;
        }
        else
        {
            for (k = 0; k < passo; k++)
            {
                if (casasVisitadas < (Nlinhasvnh * Nlinhasvnh))
                {
                    Ccoluna--;
                    casasPercorridas++;
                    if (Ccoluna >= 0 && Ccoluna < Nlinhasvnh && Flinha >= 0 && Flinha < Nlinhasvnh)
                    {
                        printf("%d ", ((Flinha * Nlinhasvnh) + (Ccoluna + 1)));
                        casasVisitadas++;
                    }
                }
            }

            for (k = 0; k < passo; k++)
            {
                if (casasVisitadas < (Nlinhasvnh * Nlinhasvnh))
                {
                    Flinha--;
                    casasPercorridas++;
                    if (Ccoluna >= 0 && Ccoluna < Nlinhasvnh && Flinha >= 0 && Flinha < Nlinhasvnh)
                    {
                        printf("%d ", ((Flinha * Nlinhasvnh) + (Ccoluna + 1)));
                        casasVisitadas++;
                    }
                }
            }
            passo++;
        }
    }
    printf("\n%d", casasPercorridas);
    return 0;
}
