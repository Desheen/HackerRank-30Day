#include <iostream>
#include <vector>

int 
max( int S , int K )
{
	if( (K-1|K) <= S ) return K-1;
	else 
		return K-2;
}

int 
main( int argc , char**argv )
{
	int N;

	std::cin >> N;

	int S, K;
	while(N-- > 0 )
	{
		std::cin >> S >> K;
		std::cout << max(S,K) << std::endl;

	}

	return 0;
}