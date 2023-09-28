// Program to find three greatest numbers in O(1)
#include<stdio.h>
#include<stdlib.h>

void main(){
	int *a,n,i;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int first=INT_MIN,second=INT_MIN,third=INT_MIN;
	for(i=0;i<n;i++){
		if(first<a[i]){
			third=second;
			second=first;
			first=a[i];
		}
	}
	printf("\n The first 3 numbers are %d %d %d",first,second,third);
	
}
