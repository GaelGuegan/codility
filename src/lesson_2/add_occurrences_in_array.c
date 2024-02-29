#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int occurences(uint32_t A[], int N)
{
    int r = 0;
    int occ = 0;
    int *pair = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i)
                continue;
            if (A[i] == A[j]) {
                occ = 1;
                break;
            }
        }
        if (occ == 0)
            return A[i];
        occ = 0;
    }

    return r;
}

int main(int argc, char* argv[])
{
    int t1[] = {9, 3, 9, 1, 3, 9, 6, 6};
    int r = occurences(t1, sizeof(t1)/sizeof(t1[0]));
    printf("Result: %d", r);
}