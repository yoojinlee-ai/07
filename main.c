#include <stdio.h>

void f(void);

int main(void) {
    int i;
    for (i = 0; i < 5; i++) {
        f();
        printf("\n"); 
    }
    
    system("PAUSE");
    return 0;
}

void f(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("#");
    }
}

