#include <stdio.h>

 /*  Problem: Customer bill for a company
    Algorithm:
    Developed by: Ruhamah Kairat
    Date: 03/03/26
*/

int main(){

    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    int tvQty, monitorQty, flashQty, hardQty, printerQty;

    float tvTotal, monitorTotal, flashTotal, hardTotal, printerTotal;
    float subTotal, tax, total;

    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQty);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQty);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashQty);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardQty);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printerQty);

    tvTotal = tvQty * TV_PRICE;
    monitorTotal = monitorQty * MONITOR_PRICE;
    flashTotal = flashQty * FLASH_PRICE;
    hardTotal = hardQty * HARD_PRICE;
    printerTotal = printerQty * PRINTER_PRICE;

    subTotal = tvTotal + monitorTotal + flashTotal + hardTotal + printerTotal;
    tax = subTotal * TAX_RATE;
    total = subTotal + tax;

    printf("\nQTY  DESCRIPTION      UNIT PRICE     TOTAL PRICE\n");
    printf("-----------------------------------------------------\n");
    printf("%-4d TV                  400.00       %.2f\n", tvQty, tvTotal);
    printf("%-4d Monitor             220.00       %.2f\n", monitorQty, monitorTotal);
    printf("%-4d Flash Drive          35.20       %.2f\n", flashQty, flashTotal);
    printf("%-4d Hard Drive           150.00       %.2f\n", hardQty, hardTotal);
    printf("%-4d Deskjet Printer      300.00       %.2f\n", printerQty, printerTotal);
    printf("-------------------------------------------------------\n");
    printf("Subtotal: %.2f\n", subTotal);   
    printf("Tax: %.2f\n", tax);
    printf("Total: %.2f\n", total);             
    printf("-------------------------------------------------------\n");

    return 0;
}
