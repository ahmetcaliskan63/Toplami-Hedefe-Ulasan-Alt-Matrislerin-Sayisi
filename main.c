#include <stdio.h>

int toplamEsitMatrisSayisi(int matris[100][100], int n, int hedef) {
    int i, j, k, l, toplam, sayac = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = i; k < n; k++) {
                for (l = j; l < n; l++) {
                    toplam = 0;
                    int x, y;
                    for (x = i; x <= k; x++) {
                        for (y = j; y <= l; y++) {
                            toplam += matris[x][y];
                        }
                    }
                    if (toplam == hedef) {
                        sayac++;
                    }
                }
            }
        }
    }
    return sayac;
}

int main() {
    int matris[100][100];
    int n, hedef;
    printf("Matris boyutunu girin: ");
    scanf("%d", &n);
    printf("Matris elemanlarini girin:\n");
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }
    printf("Hedef toplami girin: ");
    scanf("%d", &hedef);
    int sonuc = toplamEsitMatrisSayisi(matris, n, hedef);
    printf("Toplam %d adet alt matris, hedef toplama esit.\n", sonuc);
    return 0;
}

