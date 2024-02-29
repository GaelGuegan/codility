#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct Results {
    int *A;
    int N;
};

void print_results(struct Results results)
{
    for (int i = 0; i < results.N; i++) {
        printf("%d ", results.A[i]);
    }
    printf("\n");
}

struct Results rotate(int A[], int N, int K)
{
    int *cpy1 = (int*) malloc(sizeof(int) * N);
    int *cpy2 = (int*) malloc(sizeof(int) * N);
    memcpy(cpy1, A, N * sizeof(int));
    memcpy(cpy2, A, N * sizeof(int));

    if (K > N) {
        K = K - N;
    }

    if (K < N) {
        for (int i = 0; i < N; i++) {
            if (i - K < 0)
                cpy1[i] = cpy2[N - K + i];
            else
                cpy1[i] = cpy2[i - K];
        }
    }

    memcpy(A, cpy1, N * sizeof(int));
    free(cpy1);
    free(cpy2);

    struct Results r = {.A = A, .N = N};
    return r;
}

int main(int argc, char* argv[])
{
    int t1[] = {3, 8, 9, 7, 6};
    struct Results r_t1 = rotate(t1, 5, 3);
    print_results(r_t1);

    int t2[] = {0, 0, 0};
    struct Results r_t2 = rotate(t2, 3, 1);
    print_results(r_t2);

    int t3[] = {1, 2, 3, 4};
    struct Results r_t3 = rotate(t3, 4, 5);
    print_results(r_t3);
}