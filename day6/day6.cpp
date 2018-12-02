#include <iostream>
#include <sstream>
#include <vector>

void print_string(std::string a)
{
    for(int i = 0 ; i < a.length() ; i+=2 )
    {
        std::cout << a[i];
    }
    std::cout << " ";
    for(int i = 1 ; i < a.length() ; i+=2 )
    {
        std::cout << a[i];
    }
    std::cout << "\n";
}

int
main( int argc , char**argv)
{

    // represent number of strings
    int N;
    std::cin >> N;
    std::vector<std::string> s;
    std::string c;
    std::stringstream ss;
    for ( int i = 0 ; i < N ; ++i )
    {
        std::cin >> std::ws;
        std::getline(std::cin,c);
        s.push_back(c);
    }

    for(std::vector<std::string>::iterator itr = s.begin() ; itr != s.end() ; ++itr )
    {
        print_string( *itr );
    }


    return 0;
}

