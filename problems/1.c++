#include<iostream>

int sumofmultiples(int a, int b, int N) {
	// ASSUMES a AND b ARE COPRIME!
	int tot = N/a + N/b; // how many mults of 3, + how many mults of 5
	return tot - N/(a*b); // remove mults of both
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
	std::cout << "Problem 1\n---------------\nAnswer: " << sumofmultiples(3, 5, 1000) << "\n"; 
	return 0;
}
