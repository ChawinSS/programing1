#include <stdio.h>

void formatSpecifier() {
    float f = 100.887;

    printf("%.1f", f);
}

int main() {
    formatSpecifier();
    return 0;
}