#pragma once
#include "BaseTask.h"
#include "../Matrix/Matrix.h"

namespace miit
{
	struct Tasks : public BaseTask
	{
	private:
		Matrix matrix;

	public:
		Tasks(Matrix matrix);

		Matrix resolve_task_1() override;

		Matrix resolve_task_2() override; 
	};
}

