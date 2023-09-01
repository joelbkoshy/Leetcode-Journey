//swap
#include<stdio.h>
void main(){
	int a,b,temp;
	printf("\n Enter the number a : ");
	scanf("%d",&a);
	printf("\n Enter the number b : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n a = %d",a);
	printf("\n b = %d",b);
}
