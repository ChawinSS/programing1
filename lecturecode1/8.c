#include <stdio.h>

static int y = 100;

void oddOrEven() {
    int x = 10;
    static int y = 10;

    x = x + 1;
    y = y + 1;

    printf("%d %d\n\n", x, y);
}

int main() {
    oddOrEven();
    return 0;
}