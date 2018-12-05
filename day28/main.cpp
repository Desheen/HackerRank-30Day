#include <iostream>
#include <regex>
#include <map>
#include <limits>

int 
main( int argc , char**argv )
{
	int N;
	std::cin >> N;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string line;
	std::vector<std::string> data;

	std::vector<std::string> raw_data;
	for( int i = 0 ; i < N ; ++i )
	{
		std::getline(std::cin,line);
		raw_data.push_back(line);

	}


	for( std::string s : raw_data) {
		std::smatch m;
		std::regex e("([[:w:]]+)[[:s:]]([a-z0-9.-_]+)@([[:w:]]+)\.com");
		bool found = std::regex_search( s , m , e );
		if(m[3] == "gmail" ) {
			data.push_back(m[1]);
		}

	}

	std::sort( data.begin() , data.end() );

	for( std::string s : data )
	{
		std::cout << s << std::endl;
	}

	return 0;
}