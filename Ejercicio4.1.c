#include <stdio.h>

int main() {
    int i = 10;
    while (i >= 1) {
        printf("%d\n", i);
        i = i - 1; // Ahora decrementa correctamente
    }
    return 0;
}
