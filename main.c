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
