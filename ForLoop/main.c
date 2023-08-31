#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    printf("--------------------------\n");

    int luckyNumber[] = {4, 8, 15, 16, 23, 42};

    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    printf("--------------------------\n");

    for (i = 0; i < 6; i++) {
        printf("%d\n", luckyNumber[i]);
    }


    return 0;
}
