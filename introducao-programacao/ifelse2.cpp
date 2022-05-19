#include <stdio.h>;

int main () {
	
	float a, b, c;
	
	printf ("\nEntre com o numerador: \n");
	scanf (" %f", &a);
	
	printf ("\nEntre com o divisor: \n");
	scanf (" %f", &b);
			
	c = (a/b);
	
	if(b == 0){
		printf ("WARNING: Divisao por zero");
	} else {
		printf ("O resultado da divisao e %3.f", c);
	}
	
}