#include<stdbool.h>
#include<stdio.h>

#include "./math.h"

int arithmeticsum(int start, int end, int step) {
	// strategy: avg start and end, calc num of terms, multiply the two.
	int diff = end - start;
	int actualend = end - diff%step;
	int doubleavg = start + actualend;
	int numterms = diff/step+1;
	return doubleavg*numterms/2;
}

int inttodigits(int N, int *digits, int maxdigits) {
	int numdigits = 0;
	int i;
	for (i=0; i<maxdigits; ++i) {
		digits[i] = N%10;
		N/=10;
		if (N==0) {
			numdigits = i+1;
			break;
		}
	}
	return numdigits;
}
