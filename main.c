/*Write a function in C that concatenates two strings without using any library functions such as strcat. 
The function should use pointers for both strings and dynamically allocate memory to hold the concatenated 
result. The function should be called concatenate(char *str1, char *str2) and return a pointer to the newly concatenated string
*/
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

char* concatenate(char *str1, char *str2) {
    int count1 = 0, count2 = 0;
    char *ptr1 = str1, *ptr2 = str2;

    while (*ptr1++) count1++; // count the number of letters
    while (*ptr2++) count2++;

    char *result = (char *)malloc(count1 + count2 + 1); // dynamically allocate memory to hold the concatenated 

    char *answer = result;
    while (*str1) {
        *answer++ = *str1++; // append first str
    }

    while (*str2) {
        *answer++ = *str2++; // append second str
    }

    *answer = '\0'; // append null 

    return result;
}

int main() {

    char str1[MAX];
    char str2[MAX];

    printf("Write the first string : "); // get the first string
    scanf("%s", str1);
    printf("Write the second string : "); // get the second string
    scanf("%s", str2);   
    
    char *result = concatenate(str1, str2);

    if (result != NULL) {
        printf("\nConcatenated String: %s\n", result);
        free(result);
    }

    return 0;
}
