#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

int 
main( int argc , char**argv )
{
	int d1,m1,y1;
	int d2,m2,y2;

	std::cin >> d1 >> m1 >> y1;
	std::cin >> d2 >> m2 >> y2;

	if( y1 > y2) {
		std::cout << 10000 << std::endl;
	} else if ( y1 == y2 && m1 > m2 ) {
		std::cout << ( m1 - m2 ) * 500 << std::endl;
	} else if ( y1 == y2 && m1 == m2 && d1 > d2 ){
		std::cout << (d1 - d2)*15 << std::endl;
	} else {
		std::cout << 0 << std::endl;
	}

	return 0;
}