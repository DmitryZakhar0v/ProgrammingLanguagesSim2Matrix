#include "Tasks.h"

void miit::Tasks::resolve_task_1()
{
	miit::Matrix matrix;
	matrix.fill_manual(4, 4, { 1, 16, 3, 4, 16, 6, 7, 8, -17, 10, 11, 16, 13, 14, 15, 16 });
	miit::Matrix result = matrix;
	int max = miit::get_abs_max_element(matrix);
	for (size_t i = 0; i < result.rows_counts(); i++)
	{
		for (size_t j = 0; j < result.columns_counts(); j++)
		{
			if (result[i][j] == max)
			{
				result[i][j] = 0;
			}
		}
	}
	std::cout << result;
}

void miit::Tasks::resolve_task_2()
{
	miit::Matrix matrix;
	matrix.fill_manual(4, 4, { 1, 16, 3, 4, 16, 6, 7, 8, -17, 10, 11, 16, 13, 14, 15, 16 });
	miit::Matrix result;
	std::vector<int> zero_row;
	for (size_t i = 0; i < matrix.rows_counts(); i++)
	{
		zero_row.push_back(0);
	}
	int max = miit::get_abs_max_element(matrix);
	for (size_t i = 0; i < matrix.rows_counts(); i++)
	{
		result.add_row(matrix[i]);
		if (miit::is_element_in_row(matrix[i], max))
		{
			result.add_row(zero_row);
		}
	}
	std::cout << result;
}

int miit::get_abs_max_element(miit::Matrix matrix)
{
	int max = 0;
	for (size_t i = 0; i < matrix.rows_counts(); i++)
	{
		for (size_t j = 0; j < matrix.columns_counts(); j++)
		{
			if (std::abs(matrix[i][j]) >= std::abs(max))
			{
				max = matrix[i][j];
			}
		}
	}
	return max;
}

bool miit::is_element_in_row(std::vector<int> row, int item)
{
	for (size_t i = 0; i < row.size(); i++)
	{
		if (row[i] == item)
		{
			return true;
		}
	}
	return false;
}
