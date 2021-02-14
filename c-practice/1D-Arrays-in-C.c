#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // Scanning Size of Array 
    int size_of_array;
    scanf("%d", &size_of_array);
    
    // Creating Dynamic Array
    int *arr = (int*)malloc(size_of_array * sizeof(int));
    
    // Taking input to Array
    for(int i = 0; i < size_of_array; i++){
        scanf("%d", &arr[i]);
    }
    
    // Calculating Sum
    int sum = 0;
    for(int i = 0; i < size_of_array; i++){
        sum += arr[i];
    }
    
    // Printing Sum
    printf("%d", sum);
    
    return 0;
}