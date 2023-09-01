#include<stdio.h>
#include<stdbool.h>

void main(){
	
	int a;
	scanf("%d",&a);
	bool y=false;

	if(a%400==0){
		y=true;
	}
	else if(a%100==0){
		y=false;
	}
	else if(a%4==0){
		y=true;
	}
	else{
		y=false;
	}
	if(y){
		printf("\nLeap year");
	}
	else{
		printf("\nNot a leap year");
	}
	
	
}
