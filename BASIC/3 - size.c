//sizeof int,char,...
#include<stdio.h>
void main(){
	int i;
	char j;
	float k;
	double l;
	
	i=1;
	j="a";
	k=3.12;
	l=1111.2222;
	
	printf("\nSize of integer : %d",sizeof(i));
	printf("\nSize of char :  %d",sizeof(j));
	printf("\nSize of float : %d",sizeof(k));
	printf("\nSize of double : %d",sizeof(l));
}

