#include<stdio.h>
#include<stdlib.h>


int binarySearch(int *a,int low,int high,int key){
	if(high<low)
	return -1;
	int mid=(low+high)/2;
	
	if(a[mid]==key)
	return mid;
	
	if(a[mid]<key)
	return binarySearch(a,mid+1,high,key);	
	else return binarySearch(a,low,mid-1,key);
}

void main(){
	int *a,n,i;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*(n+5));
	printf("\n\nEnter the values :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sorting
	int j;
	for(i=0;i<n-1;i++){
		int small=i;
		for(j=i;j<n;j++){
			if(a[small]>a[j]){
				small=j;
			}
		}
		int temp=a[i];
		a[i]=a[small];
		a[small]=temp;
	}
	
	printf("\n sorted : ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	printf("\nEnter the number to be inserted : ");
    scanf("%d",&j);
    int pos=n;
    if(j<a[0])
    pos=0;
	for(i=0;i<n;i++){
		if(a[i]<=j && j<=a[i+1]){
			pos=i+1;
			printf("\nThe position : %d",i);
			break;
		}

	}	
	n++;
	for(i=n-1;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=j;
	printf("\nElements after inserting : ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	
	printf("\nEnter the element to be deleted : ");
	scanf("%d",&j);
	pos=binarySearch(a,0,n-1,j);
	if(pos==-1){
		printf("\n No such element found!! ");
	}
	else{
		printf("\n the element found at position %d ",pos);
		for(i=pos;i<n-1;i++)
		a[i]=a[i+1];
		n--;
		printf("\nThe elements after deleting a number is : ");
		for(i=0;i<n;i++)
		printf(" %d",a[i]);
	}
}
