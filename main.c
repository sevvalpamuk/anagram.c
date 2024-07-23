#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int sayi1, sayi2;

int karsilastir(int x, int y);

int main(void) {
    printf("Anagram kontrolu yapilacak sayilari giriniz:");
    scanf("%d,%d", &sayi1, &sayi2);

    if (karsilastir(sayi1, sayi2)) {
        printf("Sayilar anagramdir\n");
    } else {
        printf("Anagram degil.\n");
    }

    return 0;
}

int karsilastir(int x, int y) {
    int count1[10] = {0};
    int count2[10] = {0};

    while (x > 0) {
        int kalan = x % 10;
        count1[kalan]++;
        x /= 10;
    }

    while (y > 0) {
        int kalan2 = y % 10;
        count2[kalan2]++;
        y /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }
    return 1;
}
