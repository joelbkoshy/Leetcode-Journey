#include<stdio.h>
#include<stdlib.h>

void printSubArrays(int[],int,int,int);

void main(){
    int *arr,n;
    printf("\n n = ");
    scanf("%d",&n);
    arr= (int*)malloc(sizeof(int)*n);
    int i;
    printf("\nEnter the elements !");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printSubArrays(arr,0,0,n);
}

void printSubArrays(int arr[],int start,int end,int n){
    if(end==n || start==n)
    return;
    else if(start>end)
    printSubArrays(arr,0,end+1,n);
    else{
        printf("\n[");
        int i;
        for(i=start;i<end;i++)
        printf(" %d,",arr[i]);
        printf(" %d]",arr[end]);
        printSubArrays(arr,start+1,end,n);
    }
    return;
}
