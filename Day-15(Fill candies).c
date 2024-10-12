#include <stdio.h>

int main() {
    int testcases; 
    scanf("%d", &testcases);


    for (int i = 0; i < testcases; i++) {
        int totalcandies, pocketsperbag, maxcandiesperpocket;
        
     
        scanf("%d %d %d", &totalcandies, &pocketsperbag, &maxcandiesperpocket);

     
        int maxcandiesperbag = pocketsperbag * maxcandiesperpocket;

    
        int bagsneeded = (totalcandies + maxcandiesperbag - 1) / maxcandiesperbag;

        printf("%d\n", bagsneeded);
    }

    return 0;
}
