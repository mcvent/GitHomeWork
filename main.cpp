#include <stdio.h>
int fib(int n) {
    if (n == 0) {
        return 0;}
    if (n == 1) {
        return 1;  
    }

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int next = a + b; 
        a = b;  
        b = next;
    }

    return b; }

int main() {
    int n = 10;  
    for (int i = 0; i < n; i++) {
        printf("%d\n", fib(i));  
    }
    return 0;
}
