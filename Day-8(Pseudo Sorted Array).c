#include <stdio.h>

int is_sorted(int arr[], int n) {
   
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void solve(int n, int arr[]) {
    int violations = 0;
    int first_violation = -1;
    
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            violations++;
            if (first_violation == -1) {
                first_violation = i;  
            }
        }
    }
    

    if (violations == 0) {
        printf("YES\n");
        return;
    }
    if (violations == 1) {
        int i = first_violation;    
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;    
        if (is_sorted(arr, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int n;
        scanf("%d", &n); 
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]); 
        }
        
        solve(n, arr);
    }
    
    return 0;
}
