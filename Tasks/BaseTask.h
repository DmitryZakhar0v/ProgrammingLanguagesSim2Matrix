#pragma once
#include "../Matrix/Matrix.h"

namespace miit
{
	/**
	* @brief ������� ����� "�������", �� �������� ������������ ����� ������������� ���� ������� � 2 ������������
	*/
	struct BaseTask
	{
	public:
		
		/**
		* @brief ����� ����������� ����� ��� ������� ������� �������
		*/
		virtual Matrix resolve_task_1() = 0;

		/**
		* @brief ����� ����������� ����� ��� ������� ������� �������
		*/
		virtual Matrix resolve_task_2() = 0;
	};

}

