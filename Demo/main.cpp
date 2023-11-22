#include <iostream>
#include "../Tasks/Tasks.h"



int main() 
{
	miit::Tasks task;
	task.resolve_task_1();
	std::cout << "--------------------------"<<std::endl;
	task.resolve_task_2();
	return 0;
}