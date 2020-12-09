#include <stdio.h>
#include <math.h>
/* Shout out to Nicholas Peter Warner AO, former Director-General of the Australian Secret Intelligence Service */
/* Wonder where I can source Newton's Principia. Thankfully Britain's trade allows for high quality products 
	posted internationally and cheaper than you would ever get in Australia. e.g. electronics parts, books,
	clothes, rare and valuable things ... so thankfully just bought a hard-back Kernighan C manual */

/* authored by Charles Thomas Wallace Truscott, GitHub.com/r0ss1n1. just practice with C syntax */

/* Very good C standard library paper text by Plaguer */

float return_sine(float x);
float return_cosine(float x);
float return_tangent(float x);
int return_power(int base, int exponent);

int main(void) {
	
	printf("Enter T for trigonometrical functions or P for the (base, exponent) power function\n");
	char choice;
	int trig_choice;
	float x;
	scanf("%c", &choice);
	printf("You selected %c\n", choice);
	if (choice == 'T') {
		printf("Enter 1 for the sine function, 2 for the cosine function or 3 for the tangent function\n");
		printf("\n\n");
		scanf("%d", &trig_choice);
		if (trig_choice == 1) {
			printf("Enter a floating-point number to perform sin(x) on\n");
			scanf("%f", &x);
			printf("sine %f is %f\n", x, return_sine(x));
		} else if (trig_choice == 2) {
			printf("Enter a floating-point number to perform cos(x) on\n");
			scanf("%f", &x);
			printf("cosine %f is %f\n", x, return_cosine(x));
		} else if (trig_choice == 3) {
			printf("Enter a floating-point number to perform tan(x) on\n");
			scanf("%f", &x);
			printf("tangent %f is %f\n", x, return_tangent(x));
		} else {
			printf("Quitting!\n");
			exit(1);
		}

	} else if (choice == 'P') {
		int base;
		int exponent;
		printf("Enter the base, returned by the enter key\t");
		scanf("%d", &base);
		printf("Enter the exponent, returned by the enter key\t");
		scanf("%d", &exponent);
		printf("%d to the %d power is %d\n", base, exponent, return_power(base, exponent));
	} else if (choice != 'T' || choice != 'P') {
		printf("Incorrect choice. Enter T or P\n");
	} else {
		printf("Quitting!\n");
		exit(1);
	}
	return 0;
}

int return_power(int base, int exponent) {

	return pow(base, exponent);
}

float return_sine(float x) {
	return sin(x);
}

float return_cosine(float x) {
	return cos(x);	
}

float return_tangent(float x) {
	return tan(x);
}