#include<stdio.h>
#include<stdlib.h>

void main(){
	int *a,n;
		printf("\n elements : ");
		scanf("%d",&n);
	int i;
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nElements : ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	printf("\nEnter the element to be deleted : ");
	int x=-5;
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==a[i]){
		 x=i;
		 break;	
		}
	}
	if(x!=-5){
		printf("\nElement found at position %d ",i);
		for(i=x;i<n-1;i++)
		a[i]=a[i+1];
		n--;
	}
	printf("\n The elements after deleting : ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
}
