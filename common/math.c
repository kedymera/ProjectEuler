#include<stdbool.h>
#include<stdio.h>
#include<math.h>

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

int sumsquares(int N) {
	// 1^2 + 2^2 + ... + N^2 == N*(N+1)*(2N+1)/6
	return N*(N+1)*(2*N+1)/6;
}

bool isprime(int i) {
	int d;
	for (d = 2; d <= sqrt(i); ++d) {
		if (i % d == 0) return false;
	}
	return true;
}

int nthprime_slow(int n) {
	int i = 1;
	while (n > 0) {
		++i;
		if (isprime(i))
			--n;
	}
	return i;
}
