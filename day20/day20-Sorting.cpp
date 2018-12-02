#include <iostream>

int
main( int argc ,char**argv )
{

	int N;
	std::cin >> N;
	static int ns = 0;
	int* A = new int[N];

	for( int i =0 ; i < N ;++i )
		std::cin >> A[i];


	for (int i = 0; i < N; i++) {
	    // Track number of elements swapped during a single array traversal
	    int numberOfSwaps = 0;
	    
	    for (int j = 0; j < N - 1; j++) {
	        // Swap adjacent elements if they are in decreasing order
	        if (A[j] > A[j + 1]) {
	            std::swap(A[j], A[j + 1]);
	            numberOfSwaps++;
	        }
	    }
	    
	    // If no elements were swapped during a traversal, array is sorted
	    if (numberOfSwaps == 0) {
	        break;
	    }
	    ns += numberOfSwaps;
	}

	std::cout << "Array is sorted in " << ns << " swaps.\n";
	std::cout << "First Element: " << A[0] << "\n";
	std::cout << "Last Element: " << A[N-1] << "\n";
	delete[] A;
	return 0;

}