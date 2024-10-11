#include <stdio.h>

int main() {
    int T; 
    
 
    scanf("%d", &T);
    
  
    for (int i = 0; i < T; i++) {
        int X, Y; 
        
       
        scanf("%d %d", &X, &Y);
        
    
        if (Y >= X / 2.0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
