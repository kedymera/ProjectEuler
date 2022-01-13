//PROBLEM 5
//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>

int main() {
	// not even a programming exercise! 
	// equivalent problem is "what is the product of the largest power of each prime which is <= 20"
	// i.e for 2, 2^4==16 is the largest <= 20, for 3, 3^2==9 is, then for the other primes <= 20 only 1 copy fits.
	printf("Problem 5\n---------------\nAnswer: %d\n", 2*2*2*2 * 3*3 * 5 * 7 * 11 * 13 * 17 * 19);
	return 0;
}
