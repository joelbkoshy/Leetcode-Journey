//long
#include<stdio.h>
void main(){
	int a;
	long b;
	long long c;
	double d;
	long double e;
	
	a=1;
	b=2;
	c=3;
	d=4.4;
	e=88.6;
	printf("\n Sizeof a,b,c,d,e : %zu,%zu,%zu,%zu,%zu",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
}
