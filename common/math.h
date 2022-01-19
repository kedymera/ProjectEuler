#include<stdbool.h>
// returns sum of arithmetic sequence from start (incl) to end (incl) in steps of step
// e.g. (5, 100, 5) |-> 5+10+15+...+95+100 = \sum_{n=1}^20{5n} = 1050
int arithmeticsum(int start, int end, int step);

// given an int N and an empty array to store digits digits (whose array length is an upper bound on the number of digits maxdigits),
// calculates the base 10 digits of the number, storing them in array digits, and returns the actual number of digits
// e.g. N=648912, digits of length 9 and maxdigits=9, sets digits to {2, 1, 9, 8, 4, 6} and returns 6.
int inttodigits(int N, int *digits, int maxdigits);

// sums the squares of all naturals from 1 to N
int sumsquares(int N);

// returns the nth prime (1: 2, 2: 3, 3: 5, 4: 7, 5: 11, etc.)
int nthprime_slow(int n);
