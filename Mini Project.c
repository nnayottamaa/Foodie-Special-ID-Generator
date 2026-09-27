#include <stdio.h>

int main()
{
    char Nama[50];
    char Makanan[50];
    char ID[50];
    char Makanan_ID[50];

    int Umur;
    int Bulan_Lahir;
    int umur_ID;
    int Tanggal_Lahir;
    int Tahun_Lahir;
    int i;
    int j = 0;

    printf("----------------------------------------------\n");
    printf("         FOODIE SPECIAL ID GENERATOR          \n");
    printf("----------------------------------------------\n");
    printf("Nama                       : ");
    scanf(" %[^\n]", Nama);
    printf("Makanan                    : ");
    scanf(" %[^\n]", Makanan);
    printf("Umur                       : ");
    scanf("%d", &Umur);
    printf("Tanggal Lahir (DD MM YYYY) : ");
    scanf("%d %d %d", &Tanggal_Lahir, &Bulan_Lahir, &Tahun_Lahir);

    if (Nama[0] >= 'a' && Nama[0] <= 'z')
    {
        Nama[0] = Nama[0] - 32;
    }

    for (i = 1; Nama[i] != '\0'; i++)
    {
        if (Nama[i - 1] == ' ' && Nama[i] >= 'a' && Nama[i] <= 'z')
        {
            Nama[i] = Nama[i] - 32;
        }
    }
    if (Makanan[0] >= 'a' && Makanan[0] <= 'z')
    {
        Makanan[0] = Makanan[0] - 32;
    }
    for (i = 1; Makanan[i] != '\0'; i++)
    {
        if (Makanan[i - 1] == ' ' && Makanan[i] >= 'a' && Makanan[i] <= 'z')
        {
            Makanan[i] = Makanan[i] - 32;
        }
    }
    j = 0;
    if (Makanan[0] != ' ')
    {
        Makanan_ID[j] = Makanan[0];
        j++;
    }
    for (i = 1; Makanan[i] != '\0'; i++)
    {
        if (Makanan[i - 1] == ' ' && Makanan[i] != ' ')
        {
            Makanan_ID[j] = Makanan[i];
            j++;
        }
    }

    Makanan_ID[j] = '\0';
    umur_ID = 1000 - Umur;
    sprintf(ID, "FS%c%c%d%02d%02d%d%s", Nama[0], Nama[1] >= 'a' && Nama[1] <= 'z' ? Nama[1] - 32 : Nama[1], Tanggal_Lahir, Bulan_Lahir,
    Tahun_Lahir % 100, umur_ID, Makanan_ID);
    printf("-------------------------------------------\n");
    printf("ID              : %s\n", ID);
    printf("Name            : %s\n", Nama);
    printf("Favorite Food   : %s\n", Makanan);
    printf("-------------------------------------------\n");

return 0;
}

