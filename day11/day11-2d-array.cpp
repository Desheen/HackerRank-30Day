#include <iostream>
#include <vector>
#include <limits>

#define size 6

int
main( int argc , char**argv )
{

	int numbers[size][size];
	int max = std::numeric_limits<int>::min();
	int total;

	for( int row = 0 ; row < size ; ++row)
	{
		for( int column = 0 ; column < size; ++column )
		{
			std::cin >> numbers[row][column];
		}
	}
	for( int row = 0 ; row < 4 ; ++row )
	{
		for( int column = 1 ; column < 5 ; ++column )
		{
			total = numbers[row][column-1] + numbers[row][column]  + numbers[row][column+1] 
											+ numbers[row+1][column] 
					+ numbers[row+2][column-1] + numbers[row+2][column]  + numbers[row+2][column+1];

			/*std::cout << numbers[row][column-1] << " " << numbers[row][column]  << " " <<  numbers[row][column+1] 
											<< "\n  " <<  numbers[row+1][column] << "\n" << 
						numbers[row+2][column-1] << " " <<  numbers[row+2][column]  << " " <<  numbers[row+2][column+1] << "\n"; 

			std::cout << total << std::endl;*/
			max = std::max(total,max);
		}
		
	}

	//std::cout << " MAX = " << max << std::endl;
	std::cout << max << std::endl;
	return 0;
}