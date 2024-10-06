#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 
        if (X >= Y) {
            printf("0\n");
        } else {
            printf("%d\n", (Y / X) - 1);
        }
    }
    return 0;
}
