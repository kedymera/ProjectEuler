//PROBLEM 4
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include "../common/math.h"

bool ispalindromedec6(int N) {
	int digits[6];
	int numdigits = 0; // probably six but could be fewer
	int i;
	bool ispalin = true;

	//convert to digits
	numdigits = inttodigits(N, digits, 6);

	for (i=0; i<numdigits/2; ++i) {
		if (digits[i] != digits[numdigits - 1 - i]) {
			ispalin = false;
			break;
		}
	}

	return ispalin;
}

int largestpalindrome3() {
	int i, j, ij;
	int largest = -1;
	for (i=999; i>0; --i) {
		for (j=999; j>0; --j) {
			ij = i*j;
			// ispalindromedec6 is more expensive so put second and hope it's short circuited away
			if (ij > largest && ispalindromedec6(ij)) {
				largest = ij;
			}
		}
	}
	return largest;
}

int main() {
	printf("Problem 4\n---------------\nAnswer: %d\n", largestpalindrome3());
	return 0;
}
