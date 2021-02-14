#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function

    // Calc Sum
    int sum = *a + *b;

    // Calc Difference
    int diff = (*a > *b) ? (*a - *b) : (*b - *a);

    // Update *a to sum
    *a = sum;

    // Update *b to difference
    *b = diff;       
}

int main() {
    // DRIVER CODE
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
