#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max1, max2, max;
    
    // Compare and Assign
    max1 = a > b ? a : b;
    max2 = c > d ? c : d;
    return max = max1 > max2 ? max1 : max2;
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
