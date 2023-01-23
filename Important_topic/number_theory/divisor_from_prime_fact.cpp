// C++ implementation of the approach
#include "iostream"
#include "vector"
using namespace std;

struct primeFactorization {

	// to store the prime factor
	// and its highest power
	int countOfPf, primeFactor;
};

// Recursive function to generate all the
// divisors from the prime factors
void generateDivisors(int curIndex, int curDivisor,
					vector<primeFactorization>& arr)
{

	// Base case i.e. we do not have more
	// primeFactors to include
	if (curIndex == arr.size()) {
		cout << curDivisor << ' ';
		return;
	}

	for (int i = 0; i <= arr[curIndex].countOfPf; ++i) {
		generateDivisors(curIndex + 1, curDivisor, arr);
		curDivisor *= arr[curIndex].primeFactor;
	}
}

// Function to find the divisors of n
void findDivisors(int n)
{

	// To store the prime factors along
	// with their highest power
	vector<primeFactorization> arr;

	// Finding prime factorization of n
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			int count = 0;
			while (n % i == 0) {
				n /= i;
				count += 1;
			}

			// For every prime factor we are storing
			// count of it's occurrenceand itself.
			arr.push_back({ count, i });
		}
	}

	// If n is prime
	if (n > 1) {
		arr.push_back({ 1, n });
	}

	int curIndex = 0, curDivisor = 1;

	// Generate all the divisors
	generateDivisors(curIndex, curDivisor, arr);
}

// Driver code
int main()
{
	int n = 6;

	findDivisors(n);

	return 0;
}
