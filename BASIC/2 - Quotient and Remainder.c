//Quotient and Remainder
#include<stdio.h>
void main(){
	int dividend,divisor,quotient,remainder;
	printf("\nEnter the dividend : ");
	scanf("%d",&dividend);
	printf("\nEnter the divisor : ");
	scanf("%d",&divisor);
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	printf("\nQuotient = %d \n Remainder = %d ",quotient,remainder);
}
