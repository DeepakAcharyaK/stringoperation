#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20], str2[20], str3[40]; 
  
    int cresult = 0;

    printf("Enter the string 1: ");
    scanf("%s", str1);

    printf("Enter the string 2: ");
    scanf("%s", str2);

    // String comparison
    printf("After comparison: ");
    cresult = strcmp(str1, str2);
    if (cresult == 0) {
        printf("Both strings are equal\n");
    } else {
        printf("Both strings are different\n");
    }

    // String concatenation
    printf("After the string concatenation: ");
    strcpy(str3, str1); // Copy str1 to str3
    strcat(str3, str2); // Concatenate str2 to str3
    printf("%s\n", str3);

    // String length
    //printf("After the string length: %d\n", strlen(str3));
    int length = strlen(str3);
    printf("After the string length: %d\n",length);
    return 0;
}

