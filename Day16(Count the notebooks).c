#include <stdio.h>

int main() {
    int T;
    int N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int notebooks = 10 * N;
        printf("%d\n", notebooks);
    }
    return 0;
}
