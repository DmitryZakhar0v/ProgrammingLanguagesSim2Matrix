#include <iostream>
#include "../Generator/Generator.h"
#include "../Generator/IStreamGenerator.h"
#include "../Generator/RandomGenerator.h"
#include "../Matrix/Matrix.h"

int main() 
{
	Generator* manual = new IStreamGenerator();
	Generator* random = new RandomGenerator(-25, 25);
	miit::Matrix matrix_manual{ 5,5, manual };
	
	std::cout << matrix_manual;
	std::cout << " ------------------------" << std::endl;
	miit::Matrix matrix_random{ 5,5, random };
	std::cout << matrix_random;
	return 0;
}