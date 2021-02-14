#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch; 
    char s_string[100],sentence[1000];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    // Scan a Character
    scanf("%c", &ch);

    // Scan a String
    scanf("%s", &s_string);

    // Scan a Sentence
    scanf("\n");
    scanf("%[^\n]*c", &sentence);

    // Print to console
    printf("%c\n%s\n%s", ch, s_string, sentence);
    return 0;
}