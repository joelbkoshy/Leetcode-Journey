#include<stdio.h>
void main(){
	int *a,n,i,j;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	a = (int*)malloc(sizeof(int)*n);
	printf("\nEnter the array : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nInsertion Sort : ");
	for(i=1;i<n;i++){
		int temp=a[i];
		j=i-1;
		while(0<=j && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
}
