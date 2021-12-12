#include "./math.h"

int arithmeticsum(int start, int end, int step) {
	// returns sum of arithmetic sequence from start to end (both inclusive) in steps of step
	// e.g. (5, 100, 5) |-> 5+10+15+...+95+100 = \sum_{n=1}^20{5n} = 1050
	
	// strategy: avg start and end, calc num of terms, multiply the two.
	int startplusend = start+end;
	int numterms = (end-start)/step+1;
	return startplusend*numterms/2;
}
