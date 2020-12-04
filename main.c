#include <stdio.h>

void duzSayilar(int n) {
    long temp[3];
    long duzSayi = 0;

    for (int i = 0; n >= i; i++) {
        duzSayi = 0;
        if(i < 3) {
            duzSayi = i;
            temp[i] = (long) i;
        } else if (i >= 3) {
            for (int j = 0; j < 3; j++) {
                duzSayi += (long) temp[j];
            }
            temp[0] = temp[1];
            temp[1] = temp[2];
            temp[2] = duzSayi;
        }

        printf("%ld\t%ld\n", i, duzSayi);
    }
}

int main() {
    duzSayilar(100);
    return 0;
}