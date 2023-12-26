#pragma once
#include "BaseTask.h"
#include "../Matrix/Matrix.h"

namespace miit
{
	/**
	* @brief ����� �������, ��� �������� � ���� 2 ���������� 
	*/
	struct Tasks : public BaseTask
	{
	private:
		Matrix matrix;

	public:
		/**
		* @brief ������������� ������� ���� Tasks
		* @param matrix ������� � ������� ���� ��������� �������
		*/
		Tasks(Matrix matrix);

		/**
		* @brief ������� ������� �������
		* @return ������� � ������� ����������� �������
		*/
		Matrix resolve_task_1() override;

		/**
		* @brief ������� ������� �������
		* @return ������� � ������� ����������� �������
		*/
		Matrix resolve_task_2() override; 
	};
}

