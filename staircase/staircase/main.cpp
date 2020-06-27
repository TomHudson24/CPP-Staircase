#include <iostream>
#include <numeric>
#include <limits>
/*
Given any positive integer, print out a right-aligned staircase of that amount.
*/

//basic solution
/*
Use 3 for loops, 2 nested. Top gives overall count, next gives the spacing for right alignment and the final gives the number of #'s needed for that line.
*/
#if 0
void staircase(int n){
	for(int i =1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			std::cout << " ";
		}
		for (int k = 0; k < i; k++)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
		
	}

}
#endif

//another solution
/*
This solution uses only one loop but has a helper function called patch_buffer. The loop itself starts at the bottom of the staircase
and each iteration moves up. For each iteration the patch_buffer fill in the correct amount of #'s in the string and then it is printed out.
At the end of each iteration, the new line is started, creating the staircase.
*/
#if 0
inline void patch_buffer(std::string &buffer, int i)
{
	buffer[i] = '#';
}
void staircase(int n)
{
	std::string buffer = std::string(n, ' ');
	const int max_index = n - 1;

	for(int i = max_index; i >= 0; i--)
	{
		patch_buffer(buffer, i);

		std::cout << buffer << "\n";
	}
}
#endif

int main() {
	int n; 
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	//staircase(n);

	return 0;
}