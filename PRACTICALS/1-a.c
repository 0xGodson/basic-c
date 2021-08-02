// ROGRAM USING, I/O STATEMENTS AND EXPRESSIONS

// program:
#include <stdio.h>
void main ()
{
float totamt, amount,subtot,disamt,taxamt,quantity,value,discount,tax;
printf("\nEnter the quantity of item sold:");
scanf("%f",&quantity);
printf("\nEnter the value of item:");
scanf("%f",&value);
printf("\nEnter the Discount percentage:");
scanf("%f",&discount);
printf("\nEnter the tax:");
scanf("%f",&tax);
amount=quantity * value;
disamt=(amount*discount)/100.0;
subtot=amount-disamt;
taxamt=(subtot*tax)/100.0;
totamt=subtot+taxamt;
printf("\n\n\n ******BILL****** ");
printf("\n Quantity sold: %f", quantity);
printf("\n Price per item: %f", value);
printf("\n Amount: %f", amount);
printf(" \n Discount: - %f", disamt) ;
printf("\n Discounted Total: %f", subtot) ;
printf("\n Tax: %f", taxamt);
printf("\n Total Amount %f", totamt);
}
