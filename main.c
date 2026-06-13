// Usage of array -- linear search through an array filled with numbers
#include <stdio.h>

int main() {
    int ara[] = {11, 12, 13, 14, 15};
    int i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 0; i < 5; i++) {
        if (ara[i] == n) {
            printf("found");
            break;
        }
    }
    if (i == 5){
        printf("not found");
    }
    return 0;
}

// Usage of array -- linear search through an array filled with words

#include <stdio.h>
#include <string.h>

int main() {
    char *ara[] = {"yes", "no", "pneumonoultramicroscopicsilicovolcanoconiosis"};
    char n[45];
    int i;
    
    printf("Enter a word: ");
    scanf("%s", &n);
    
    for (i = 0; i < 3; i++) {
        if (strcmp(ara[i], n) == 0) {
            printf("found");
            break;
        }
    }
    if (i == 3){
        printf("not found");
    }
    return 0;
}
