#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bill, oldPrice, newPrice, inflation, oldSubscriptionFee,
    newSubscriptionFee;

    int newRead, oldRead, totalConsumed;

    printf("Enter the inflation rate: ");
    scanf("%f", &inflation);
    printf("Enter the unit price for the previous month: ");
    scanf("%f", &oldPrice);
    printf("Enter the unit price for the previous subscription fee: ");
    scanf("%f", &oldSubscriptionFee);
    printf("Enter the reading value for the previous month: ");
    scanf("%d", &oldRead);
    printf("Enter the reading value for this month: ");
    scanf("%d", &newRead);

    totalConsumed = newRead - oldRead;
    newPrice = oldPrice * (1 + inflation / 100);
    newSubscriptionFee = oldSubscriptionFee * (1 + inflation / 100);
    bill = totalConsumed * newPrice + newSubscriptionFee;

    printf("Invoice to be paid: %f\n", bill);
    return 0;
}
