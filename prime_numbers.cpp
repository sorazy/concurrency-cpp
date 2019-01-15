// Soliman Alnaizy - so365993
// COP 4520, Spring 2019
// Objective: Using multithreading, find how many prime numbers are there from 1 - 10^8
#include <iostream>
#include <thread>
#include <math.h>

using namespace std;

// Returns true if the n is prime, returns false if composite (n is guaranteed to be >= 0)
bool isPrime(int n)
{
	// We're not considering 0 and 1 as prime numbers
	if (n == 0 || n == 1)
		return false;

	// Store the sqrt into a variable to avoid repeated computation
	int lim = sqrt(n);

	for (int i = 2; i < lim; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main(void)
{
	
	return 0;
}