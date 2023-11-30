
#include <iostream>
using namespace std;

template <typename T>
T fib(T x) {
	T t_zero(0);
	T t_one(1);
	if (x <= 0)
		return t_zero;
	if (x <= 1)
		return t_one;
	T y = fib(x - 1) + fib(x - 2);
	return y;
}

int main()
{
	// Print last number in sequence(x) of Fibonacci number
	// No -> Because x is number of length in Fibonacci sequence -> must be integer
	unsigned int x;
	cin >> x;
	cout << fib(x) << endl;

	return 0;
}
