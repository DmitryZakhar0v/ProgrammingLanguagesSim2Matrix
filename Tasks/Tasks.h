#pragma once
#include "BaseTask.h"
#include "../Matrix/Matrix.h"

namespace miit
{
	/**
	* @brief Класс задание, что включает в себя 2 подзадания 
	*/
	struct Tasks : public BaseTask
	{
	private:
		Matrix matrix;

	public:
		/**
		* @brief Инициализация объекта типа Tasks
		* @param matrix Матрица с которой надо выполнить задания
		*/
		Tasks(Matrix matrix);

		/**
		* @brief Решение первого задания
		* @return Матрица с данными выполенного задания
		*/
		Matrix resolve_task_1() override;

		/**
		* @brief Решение второго задания
		* @return Матрица с данными выполенного задания
		*/
		Matrix resolve_task_2() override; 
	};
}

