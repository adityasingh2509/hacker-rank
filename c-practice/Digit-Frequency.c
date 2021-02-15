#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    // Creating Dynamic Storage for Input
    char *str;
    str = (char *) malloc(1000 * sizeof(char));
    
    // Taking Input
    scanf("%s", str);
    
    // Creating Dynamic Storage for Output
    int *res_arr;
    res_arr = (int *) calloc(10, sizeof(int));
    
    // Iterating over Input and Switching as required to increase counter
    for(int i = 0; i < strlen(str); i++){
        switch (str[i]) {
            case '0':
                res_arr[0]++;
                break;
            case '1':
                res_arr[1]++;
                break;
            case '2':
                res_arr[2]++;
                break;
            case '3':
                res_arr[3]++;
                break;
            case '4':
                res_arr[4]++;
                break;
            case '5':
                res_arr[5]++;
                break;
            case '6':
                res_arr[6]++;
                break;
            case '7':
                res_arr[7]++;
                break;
            case '8':
                res_arr[8]++;
                break;
            case '9':
                res_arr[9]++;
                break;
        }
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d ", res_arr[i]);
    }
    
    free(res_arr);
    free(str);
    
    return 0;
}
