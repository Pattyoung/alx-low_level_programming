#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
    printf("%d", n);
    if (n < 98) {
        for (int i = n+1; i <= 98; i++) {
            printf(", %d", i);
        }
    } else if (n > 98) {
        for (int i = n-1; i >= 98; i--) {
            printf(", %d", i);
        }
    }
    printf("\n");
}

