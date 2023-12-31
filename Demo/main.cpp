#include <iostream>
#include "../Generator/RandomGenerator.h"
#include "../Generator/IStreamGenerator.h"
#include "../Tasks/Tasks.h"	
#include "../Matrix/Matrix.h"

int main() 
{
	//Generator* manual = new IStreamGenerator();
	//Generator* random = new RandomGenerator(-25, 25);
	//miit::Matrix matrix_random{ 5,5, random };
	//std::cout << matrix_random;
	//std::cout << " ------------------------" << std::endl;
	//miit::Tasks task{ matrix_random };
	//std::cout << task.resolve_task_1().to_string() << std::endl;
	//std::cout << " ------------------------" << std::endl;
	//std::cout << task.resolve_task_2().to_string() << std::endl;
	miit::Matrix matrix{ 2,4, {1,2,3,4,5,6,7,8} };
	matrix.transpose();
	std::cout << matrix;
	return 0;
}