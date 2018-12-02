#include <iostream>

int factorial(int n)
{
	if ( n == 1 ) return 1;
	return n * factorial(n-1);
}


int
main( int argc ,char**argv)
{
	int N;
	std::cin >> N;

	std::cout << factorial(N) << std::endl;

	return 0;
}

