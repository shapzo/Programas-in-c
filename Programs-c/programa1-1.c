#include <stdio.h>

int main()

{

    FILE *Fd;

    char texto[30], fitxizen[30];

    float zenb, zbkiak[100], tmp;

    int i = 0, j, k;

    printf("Mete el nombre del fichero del que cogeremos los numeros reales: ");

    scanf(" %s",fitxizen);

    Fd = fopen(fitxizen, "rb");

    if (Fd == NULL)

        printf("Error abriendo el fichero");

    while (feof(Fd) == 0)

    {
        fgets(texto, 30, Fd);

        sscanf(texto, "%f", &zenb);

        zbkiak[i] = zenb;

        i++;
    }

    i = i - 1; //hacemos i-1 ya que fgets pilla tambien la ultima linea y esa no nos interesa

    for (j = 0; j < i; j++)

    {
        for (k = j + 1; k < i; k++)

        {
            if (zbkiak[j] > zbkiak[k])

            {
                tmp = zbkiak[k];

                zbkiak[k] = zbkiak[j];

                zbkiak[j] = tmp;
            }
        }
    }

    printf("Los numeros ordenados: \n");

    for (j = 0; j < i; j++)

    {
        printf("%.2f \n", zbkiak[j]);
    }

    getchar();
}