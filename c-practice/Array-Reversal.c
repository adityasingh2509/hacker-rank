#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int START = 0;
    int END = num - 1;
    
    while(START < END){
        int temp = arr[START];
        arr[START] = arr[END];
        arr[END] = temp;
        START++;
        END--;
    }


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}