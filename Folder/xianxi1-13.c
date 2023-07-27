#include <stdio.h>
int main(void){
	float cm;
	float in;
	float outcome;

	printf("enter number:");
	scanf("%f",&in);

	outcome = in*2.54;
	
	printf("%.8f", outcome);

	return 0;
}