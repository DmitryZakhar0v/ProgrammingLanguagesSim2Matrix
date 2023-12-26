#pragma once
#include "../Matrix/Matrix.h"

namespace miit
{
	/**
	* @brief Базовый класс "задание", от которого пользователь может отнаследовать свое задание с 2 подзаданиями
	*/
	struct BaseTask
	{
	public:
		
		/**
		* @brief Чисто виртуальный метод для решения первого задания
		*/
		virtual Matrix resolve_task_1() = 0;

		/**
		* @brief Чисто виртуальный метод для решения второго задания
		*/
		virtual Matrix resolve_task_2() = 0;
	};

}

