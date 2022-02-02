#include <stdio.h>

void unionArray(int *a, int sizeA, int *b, int sizeB, int *c, int *sizeC) {
    for (int i = 0; i < sizeA; i++)
        c[i] = a[i];
    for (int i = 0; i < sizeB; i++) {
        int isNonEqual = 1;
        for (int j = 0; j < (sizeA + i)  && isNonEqual; j++) {
            if (c[j] == b[i])
                isNonEqual = 0;
        }

        if (isNonEqual) {
            c[sizeA + i + 1] = b[i];
        }
    }
}

int main() {
    int sizeA;
    scanf("%d ", &sizeA);
    int a[sizeA];

    int sizeB;
    scanf("%d", &sizeB);
    int b[sizeB];

    int sizeC = sizeA + sizeB;

    int c[sizeC];
    unionArray(a,sizeA, b, sizeB, c);
    return 0;
}
