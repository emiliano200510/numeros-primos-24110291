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

int main() {
    int inicio, fin;

  
    printf("Ingrese el inicio del rango: ");
    scanf("%d", &inicio);
    printf("Ingrese el final del rango: ");
    scanf("%d", &fin);

    printf("Los numeros primos en el rango [%d, %d] son:\n", inicio, fin);

  
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
