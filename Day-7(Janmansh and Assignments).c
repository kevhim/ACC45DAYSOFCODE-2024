#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);
        int A[N]; 
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        char result[N + 1]; 
        result[N] = '\0'; 
        for (int i = 0; i < N; i++) {
            if (A[i] <= K) { 
                K -= A[i]; 
                result[i] = '1';
            } else {
                result[i] = '0';
            }
        }
        printf("%s\n", result);
    }
    return 0;
}
