//vowel or consonant
#include<stdio.h>
void main(){
	char a;
	printf("\n Enter the character : ");
	scanf("%c",&a);
	if(a=='A'||a=='a'||a=='e'||a=='E'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
	printf("\n Vowel");
	else
	printf("\nConsonant");
}
