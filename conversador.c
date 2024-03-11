#include <stdio.h>

// Definición de las tasas de cambio
#define GTQ_TO_USD 0.13
#define USD_TO_GTQ 7.72
#define USD_TO_EUR 0.85
#define EUR_TO_USD 1.18

// Funciones para las conversiones
float convertGTQtoUSD(float amount) {
    return amount * GTQ_TO_USD;
}

float convertUSDtoGTQ(float amount) {
    return amount * USD_TO_GTQ;
}

float convertUSDtoEUR(float amount) {
    return amount * USD_TO_EUR;
}

float convertEURtoUSD(float amount) {
    return amount * EUR_TO_USD;
}

int main() {
    int option;
    float amount, result;

    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales (GTQ) a Dólares (USD)\n");
    printf("2. Dólares (USD) a Quetzales (GTQ)\n");
    printf("3. Dólares (USD) a Euros (EUR)\n");
    printf("4. Euros (EUR) a Dólares (USD)\n");
    printf("Ingrese su opción: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Ingrese la cantidad en Quetzales (GTQ): ");
            scanf("%f", &amount);
            result = convertGTQtoUSD(amount);
            printf("%.2f GTQ son %.2f USD\n", amount, result);
            break;
        case 2:
            printf("Ingrese la cantidad en Dólares (USD): ");
            scanf("%f", &amount);
            result = convertUSDtoGTQ(amount);
            printf("%.2f USD son %.2f GTQ\n", amount, result);
            break;
        case 3:
            printf("Ingrese la cantidad en Dólares (USD): ");
            scanf("%f", &amount);
            result = convertUSDtoEUR(amount);
            printf("%.2f USD son %.2f EUR\n", amount, result);
            break;
        case 4:
            printf("Ingrese la cantidad en Euros (EUR): ");
            scanf("%f", &amount);
            result = convertEURtoUSD(amount);
            printf("%.2f EUR son %.2f USD\n", amount, result);
            break;
        default:
            printf("Opción inválida\n");
    }

    return 0;
}