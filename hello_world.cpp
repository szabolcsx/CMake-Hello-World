#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
	// This comment was added in Visual Studio 2015

	std::cout << "Invoked using args:\n";

	// Printing the command line arguments
	std::for_each(argv, argv + argc, [](char* arg)
	{
		std::cout << arg << std::endl;
	});

	std::cout << "Hello world!" << std::endl;
	return 0;
}