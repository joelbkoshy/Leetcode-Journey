
#include<stdio.h>
#include<stdlib.h>

void main(){
	int *a,n;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	a = malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nBubble Sort : ");
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
