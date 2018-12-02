#include <iostream>
#include <map>
#include <limits>
#include <algorithm>


int 
main ( int argc , char**argv )
{
	int N;
	std::map<std::string,int> phonebook;
	std::string name;
	int number;

	std::cin >> N;
	for(int i = 0 ; i < N ; ++i )
	{
		std::cin >> name;
		std::cin >> number;
		phonebook.emplace(name,number);
	}

	/*for( auto itr = phonebook.begin() ; itr != phonebook.end() ; ++itr )
	{
		std::cout << itr->first << "=" << itr->second << std::endl;
	}*/
	
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while ( std::getline( std::cin , name ) )
	{
			std::transform(name.begin(), name.end(), name.begin(), ::tolower);
		    auto search = phonebook.find(name);
		    if (search != phonebook.end()) {
		        std::cout << search->first << "=" << search->second << std::endl;
		    } else {
		        std::cout << "Not found\n";
		    }
	}
	return 0;
}