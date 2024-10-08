//https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123 the question i have solved below


#include <stdio.h>

int main() {
    int t;  
    scanf("%d", &t);
    
    while (t--) {
        int A, B; 
        scanf("%d %d", &A, &B);
        
        int limak_candies = 0, bob_candies = 0;
        int turn = 1; 
        
        while (1) {
            if (turn % 2 == 1) {
                
                if (limak_candies + turn > A) {
                    printf("Bob\n");
                    break;
                }
                limak_candies += turn;
            } else {
                
                if (bob_candies + turn > B) {
                    printf("Limak\n");
                    break;
                }
                bob_candies += turn;
            }
            turn++;
        }
    }
    
    return 0;
}
