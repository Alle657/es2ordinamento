#include <stdio.h>
#define N 10

void stampaArray(int v[]) {
    for(int i = 0; i < N; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main() {
    int v[N] = {3, 8, 12, 15, 20, 27, 31, 40, 50};
    int nuovo;

    printf("Array iniziale:\n");
    for(int i = 0; i < N-1; i++)
        printf("%d ", v[i]);

    printf("\nInserisci nuovo codice prodotto: ");
    scanf("%d", &nuovo);

    int i = N - 2;

    while(i >= 0 && v[i] > nuovo) {
        v[i+1] = v[i];
        i--;
    }

    v[i+1] = nuovo;

    printf("Array aggiornato:\n");
    stampaArray(v);

    return 0;
}