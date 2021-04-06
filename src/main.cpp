// Copyright 2021
#include <iostream>
#include <string>

#include "train.h"

int main() 
{
	Train train;
	srand(time(NULL));
	for (size_t i = 0; i < std::rand() % 10; ++i)
	{
		int temp = std::rand() % 2;
		if (temp)
			train.addCage(true);
		else
			train.addCage(false);
	}
	train.printInfo();
	std::cout << "Length of the train is " << train.length() << std::endl;
	std::cout << "After algotithm:" << '\n' << std::endl;
	train.printInfo();
	return 0;
  //return 0;
}