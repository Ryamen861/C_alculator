#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double multiply(double f, double l) {
	return f * l;
}

double divide(double f, double l) {
	// to make it easier, receive the arguments as doubles
	// taking two ints and dividing it and putting it in a double variable won't make it a double
	return f / l;
}

double add(double f, double l) {
	return f + l;
}

double subtract(double f, double l) {
	return f - l;
}


int main() {
	bool run = true;

	while (run) 
	{
		double f_num;
		printf("Enter the first number: ");
		scanf("%lf", &f_num);
		
		double l_num;
		printf("Enter the second number: ");
		scanf("%lf", &l_num);
	
		int order;
		printf("\nPlease order an operation:\n   1- add\n   2- subtract\n   3- multiply\n   4- divide\n");
		scanf("%d", &order);

		if (order == 1) {
			printf("Result: %f", add(f_num, l_num));
			run = false;
		} else if (order == 2) {
			printf("Result: %f", subtract(f_num, l_num));
			run = false;
		} else if (order == 3) {
			printf("Result: %f", multiply(f_num, l_num));
			run = false;
		} else if (order == 4) {
			printf("Result: %f", divide(f_num, l_num));
			run = false;	
		}
		printf("\n");


	}
	return 0;
}

