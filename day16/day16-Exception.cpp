#include <iostream>



int 
main( int argc , char**argv )
{
	std::string s;
	int a;

	std::getline(std::cin , s );

	try {
		a = std::stoi(s);
		std::cout << a << std::endl;
	} catch (std::exception &e) {
		std::cout << "Bad String\n";
	}
	return 0;
}