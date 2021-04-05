// EntryPoint

#include "GuessYournumber.h"

int main()
{
	std::cout << "Welcome!" << std::endl;
	std::cout << "The number must be Greater 1" << std::endl;
	std::cout << "number: ";
	int number;
	std::cin >> number;
	srand(static_cast<unsigned int>(time(0))); // rndm
	 
	int guess = rand() % number + 1;
	int tries = 0;
	do
	{
		++tries;
		std::cout << guess << std::endl;
		if (guess > number)
		{
			guess =  rand() % number + 1;
		}
		else if (guess < number)
		{
			guess = rand() % number + 1;
		}

	} while (guess != number);
	std::cout << "Ok! Tries: " << tries << std::endl;
	
	return 0;
}