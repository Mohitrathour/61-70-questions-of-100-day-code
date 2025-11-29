#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0}; 
    
    scanf("%lld", &n);
    while (n > 0) {
        int r = n % 10;   
        count[r]++;       
        n = n / 10;       
    }

    int max_freq = 0;
    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            ans = i;      
        }
    }
    printf("%d", ans);
    return 0;
}