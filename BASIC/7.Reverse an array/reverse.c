#include<stdio.h>

void main(){
	int n,*a,i;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int)*n);
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe elements are : ");
	for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
   for(i=0;i<n/2;i++){
   	int temp = a[i];
   	a[i]=a[n-i-1];
   	a[n-i-1]=temp;
   }	
   printf("\n The reversed numbers are : ");
   for(i=0;i<n;i++)
   printf(" %d",a[i]);
   
}
