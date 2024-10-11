#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int T; 
   
    scanf("%d", &T);
  
    for (int i = 0; i < T; i++) {
        int N, X; 
      
        scanf("%d %d", &N, &X);
      
        int flips = min(X, N - X);
        printf("%d\n", flips);
    }

    return 0;
}
