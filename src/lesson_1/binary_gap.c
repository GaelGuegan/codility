#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define MAX(A, B)   (A > B ? A : B)

void print_binary(uint32_t number)
{
    for (int i = sizeof(number) * 8 - 1; i >= 0; i--) {
        if ((1 << i) & number)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    uint32_t number = 0;
    uint32_t max = 0;
    uint32_t count = 0;
    uint32_t start = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    print_binary(number);

    for (int i = sizeof(number) * 8 - 1; i >= 0; i--) {
        if ((1 << i) & number) {
            start = 1;
            if (MAX(max, count) == count) {
                max = count;
            }
            count = 0;
        } else {
            if (start)
                count++;
        }
    }

    printf("Max Gap: %d\n", max);

}