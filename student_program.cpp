#include <stdio.h>
#include <string.h>


char* reverse(char str1[]) {
    static char rev[50]; 
    int len = strlen(str1); 
    for (int i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1]; 
    }
    rev[len] = '\0'; 

    printf("FUNC : %s\n", rev); 
    return rev; 
}

int main() {
    char text[50];

    printf("Enter str1 : ");
    fgets(text, sizeof(text), stdin); 
    text[strcspn(text, "\n")] = '\0'; 
    char *output = reverse(text);
    printf("MAIN : %s\n", output); 

    return 0;
}
