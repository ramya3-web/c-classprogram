#include <stdio.h>

int main() {
    float units, bill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    if (units <= 50) {
        bill = units * 0.50;  // For first 50 units, rate is 0.50 per unit
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;  // For next 100 units, rate is 0.75 per unit
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;  // For next 100 units, rate is 1.20 per unit
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;  // For units above 250, rate is 1.50 per unit
   }
    printf("Total electricity bill = %.2f\n", bill);

    return 0;
}
