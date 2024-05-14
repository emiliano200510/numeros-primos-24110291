#include <stdio.h>


int esPrimo(int num) {
    if (num <= 1) return 0; 
    if (num <= 3) return 1; 

  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1; 
}
