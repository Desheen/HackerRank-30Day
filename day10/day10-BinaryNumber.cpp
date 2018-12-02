

/*
Objective
Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given a base-
integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in

's binary representation.

Input Format

A single integer,

.

Constraints

Output Format

Print a single base-
integer denoting the maximum number of consecutive 's in the binary representation of

.

Sample Input 1

5

Sample Output 1

1

Sample Input 2

13

Sample Output 2

2

Explanation

Sample Case 1:
The binary representation of
is , so the maximum number of consecutive 's is

.

Sample Case 2:
The binary representation of
is , so the maximum number of consecutive 's is .

*/
#include <bits/stdc++.h>
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::bitset<20> a = std::bitset<20>(n);
    int counter = 0 , max = 0;
    for( int i = 0 ; i < 20 ; ++i )
    {
    	if ( a[i] == 1 ) 
    	{
    		++counter; 
    		if( counter > max ) max = counter;
    	}
    	else if( a[i] == 0 ) 
    	{
    		counter = 0;
    	}
    }

    std::cout << max << std::endl;
    return 0;
}

/*
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num; cin >> num;
    int counter = 0, maxCounter = 0;
    
    while (num)
    {
        const auto rem = num % 2;        
        counter = (counter + rem) * rem;
        maxCounter = max(counter, maxCounter);        
        num >>= 1;
    }
    
    cout << maxCounter << endl;
        
    return 0;
}

*/