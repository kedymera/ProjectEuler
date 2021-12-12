#include "./math.h"

int arithmeticsum(int start, int end, int step) {
	// strategy: avg start and end, calc num of terms, multiply the two.
	int diff = end - start;
	int actualend = end - diff%step;
	int doubleavg = start + actualend;
	int numterms = diff/step+1;
	return doubleavg*numterms/2;
}
