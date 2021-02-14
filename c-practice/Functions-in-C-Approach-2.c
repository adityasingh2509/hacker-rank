#include <stdio.h>

int max(int a, int b){
    // Compare and Return
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

int max_of_four(int a, int b, int c, int d){
    int pair_1, pair_2;
    
    // Compare and Assign
    pair_1 = max(a, b);
    pair_2 = max(c ,d);
    
    return max(pair_1, pair_2);
}

int main() {
    int a, b, c, d;

    // Scan from Input - Space Separated Input
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Call the Function
    int ans = max_of_four(a, b, c, d);

    // Print to Console
    printf("%d", ans);
    
    return 0;
}