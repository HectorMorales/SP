# include<stdio.h>

int main (){

	unsigned char a=5,b=12;

	a=(a<<4);
	a=a|b;		
	printf("%d\n", a>>4);
	printf("%d\n", a&15);	
	
	return 0;
}