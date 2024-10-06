#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int pointsAFirst = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int pointsBFirst = (1000 - 4 * Y) + (500 - 2 * (Y + X));
        int maxPoints = pointsAFirst > pointsBFirst ? pointsAFirst : pointsBFirst;
        printf("%d\n", maxPoints);
    }

    return 0;
}
