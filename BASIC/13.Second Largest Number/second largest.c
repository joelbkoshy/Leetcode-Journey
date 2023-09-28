
//Second largest number in an array
#include<stdio.h>
#include<stdlib.h>

void main(){
	int a[]={1,2,3,4},n=sizeof(a)/sizeof(int),i,first=INT_MIN,second=INT_MIN;
	for(i=0;i<n;i++){
		if(a[i]>first){
			second=first;
			first=a[i];
		}
	}
	if(second==INT_MIN)
	printf("\nThere is no second largest number!!");
	else
	printf("\nThe second largest number : %d",second);
}
