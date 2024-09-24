#include <stdio.h>

int main() {
    int n = 4,num=1;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("%d ", num++);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

  
    int value= 12;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                printf("%d ", value--);
            } else if (j == n - i - 1 && i > 0) {
                printf("%d ", value--);
            } else if (j < n - i - 1 && i > 1) {
                printf("%d ", value--);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}