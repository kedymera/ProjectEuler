//PROBLEM 3
//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <math.h>

int largestprimefactor(long N) {
	// this solution is quite dirty but w/e
	int i = 2;
	int sqrtN = sqrt(N);
	long biggestprime = N+1;
	while (i <= sqrtN) {
		while (N % i == 0) {
			N /= i;
			biggestprime = i;
		}
		++i;
	}
	return (int)biggestprime;
}

int main() {
	std::cout << "Problem 3\n---------------\nAnswer: " << largestprimefactor(600851475143) << "\n"; 
	return 0;
}
