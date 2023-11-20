#include <iostream>
#include "../Matrix/Matrix.h"

int main() 
{
	miit::Matrix a;
	a.fill_manual(2, 2, { 4,3,2,1 });
	std::cout << a;
	return 0;
}