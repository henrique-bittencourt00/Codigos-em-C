#include <stdio.h>
#include <stdlib.h>
int main () {
    float temperatura [8];
    char *horas[] = ("09h", "10h", "11h", "12h", "13h", "14h", "15h", "16");
    float soma = 0.00;

    // coleta da temperatura
    for (int i = 0; i < 8; i++) {
        printf("Digite as temperaturas registradas as %s: ", horas [i]);
        scanf ("%f", &temperatura[i]);
        soma += temperatura[i];
    }
     Printf("\nRelatorio de Temperatura:\n");
     for (int i = 0; i < 8; i++) {
        printf("%s: %.2fc\n", horas [i], temperatura [i]);
     }

     return 0;

}
