/*Program 3: Smart Billing System (Using Arithmetic and Relational Operators). A
supermarket wants to automate its billing system. The system should:
1. Take user input for the number of items purchased and their respective price per
unit.
2. Calculate the total bill using arithmetic operators.
3. Apply the following discount scheme using relational and logical operators:
• If the bill is ≥ $1000, apply a 10% discount
• If the bill is between $500 and $999, apply a 5% discount.
• Otherwise, no discount is applied.
• Display the final payable amount after applying the discount.*/

#include <stdio.h>

int main() {
    int n;
    float price, total = 0, discount = 0, final_amount;
    printf("Enter the number of items purchased: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    if(total >= 1000) {
        discount = total * 0.10;
    } else if(total >= 500 && total < 1000) {
        discount = total * 0.05;
    }

    final_amount = total - discount;

    printf("Total bill: $%.2f\n", total);
    printf("Discount applied: $%.2f\n", discount);
    printf("Final payable amount: $%.2f\n", final_amount);

    return 0;
}