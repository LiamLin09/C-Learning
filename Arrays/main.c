#include <stdio.h>
#include <stdlib.h>

int main()
{

    int luckyNumbers [] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    int superNumbers [10];
    superNumbers[0] = 100;
    printf("%d", superNumbers[0]);


    return 0;
}
