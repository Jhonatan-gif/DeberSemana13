#include <stdio.h>

int main() {
    int fib1 = 0, fib2 = 1, fib3 = 1;
    int count = 0;

    while (fib3 <= 2000) {
        if (fib3 >= 1000) {
            count++;
        }
        
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
    }
    
    return 0;
}