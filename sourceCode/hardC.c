#include <stdio.h>
#include <string.h>

void decode(char *str, int key) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] ^= key;
    }
}

int main() {
    int keepGoing = 1;
    char input[50];
    char password[] = { 'v', 'n', 'l', 'g', 'l', 'a','l', 0}; // XOR'ed with 5

    decode(password, 5);
    while(keepGoing){
        printf("Enter password: ");
        scanf("%s", input);

        if (strcmp(input, password) == 0) {
            printf("Access granted!\n");
            keepGoing = 0;
        } else {
            printf("Access denied!\n");
        }
    }
    return 0;
}
