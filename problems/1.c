//PROBLEM 1
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.

#include<iostream>
#include "../common/math.hpp"

int sumofmultiples(int a, int b, int N) {
	// ASSUMES a AND b ARE COPRIME!
	// sum all mults of a, then of b, then remove mults of both.
	return arithmeticsum(0, N, a) + arithmeticsum(0, N, b) - arithmeticsum(0, N, a*b);
}

int sumofmultiples_bad(int a, int b, int N) {
	int tot = 0;
	for (int i = 1; i < N; ++i) {
		if (i % a == 0 || i % b == 0) {
			tot += i;
		}
	}
	return tot;
}

int main() {
	std::cout << "Problem 1\n---------------\nAnswer: " << sumofmultiples(3, 5, 999) << "\n"; 
	return 0;
}
