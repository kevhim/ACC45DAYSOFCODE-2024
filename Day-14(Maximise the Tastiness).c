#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int option1 = a + c; // A with C
        int option2 = a + d; // A with D
        int option3 = b + c; // B with C
        int option4 = b + d; // B with D
      
        int maxTastiness = option1;
        if (option2 > maxTastiness) maxTastiness = option2;
        if (option3 > maxTastiness) maxTastiness = option3;
        if (option4 > maxTastiness) maxTastiness = option4;
        
        printf("%d\n", maxTastiness);
    }

    return 0;
}
