#include <stdio.h>
#include <string.h>

int main()
{
    int x, y;
    char Kode[50], Pesan[50];
    scanf("%[^\n]%*c", &Kode);
    scanf("%[^\n]%*c", &Pesan);

    int PKode = strlen(Kode), PPesan = strlen(Pesan);
    if (PKode != PPesan)
    {
        printf("Panjang kalimat berbeda, pesan palsu");
    }

    else
    {
        int x = 0, y = 0;
        for (int z = 0; z < PKode; z++)
        {
            if (Pesan[z] == ' ' && Kode[z] == ' ')
            {
                printf(" ");
            }
            else if (Kode[z] == Pesan[z])
            {
                printf("*");
                x++;
            }
            else if (Kode[z] != Pesan[z])
            {
                printf("#");
                y++;
            }
        }

        printf("\n* = %d", x);
        printf("\n# = %d", y);
        if (x >= y)
        {
            printf("\nPesan Asli");
        }
        else
        {
            printf("\nPesan Palsu");
        }
    }
    return 0;
}