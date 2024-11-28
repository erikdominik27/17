#include <stdio.h>
#include <string.h>

int numbcheck(int a);

int main() {
    char b;
    int a;
    printf("Please enter a letter: ");
    scanf("%c", &b);
    a = numbcheck(b);  
    printf("Your entered letter has the number: %d", a);  
}

int numbcheck(int a) {
    if (a >= 'a' && a <= 'z') {
        return a - 'a' + 1;  
    }
}
