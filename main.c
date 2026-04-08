#include <stdio.h>

int main() {
    char ime[30];
    char prezime[30];
    char indeks[20];
    int godina;

    printf("Unesite ime: ");
    scanf("%s", ime);

    printf("Unesite prezime: ");
    scanf("%s", prezime);

    printf("Unesite broj indeksa: ");
    scanf("%s", indeks);

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &godina);

    printf("\n--- PODACI O STUDENTU ---\n");
    printf("Ime i prezime: %s %s\n", ime, prezime);
    printf("Broj indeksa: %s\n", indeks);
    printf("Godina rodjenja: %d\n", godina);

    if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
        printf("Rodjeni ste u prestupnoj godini.\n");
    } else {
        printf("Niste rodjeni u prestupnoj godini.\n");
    }

    return 0;
}
