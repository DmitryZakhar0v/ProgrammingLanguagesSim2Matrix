#pragma once
#include "../Matrix/Matrix.h"

namespace miit
{
	struct BaseTask
	{
	public:
		virtual ~BaseTask() = 0 {};
		virtual Matrix resolve_task_1() = 0;
		virtual Matrix resolve_task_2() = 0;
	};

}

