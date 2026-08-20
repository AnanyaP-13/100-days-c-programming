// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float cp, sp, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", percentage);
    }
    else if (cp > sp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
