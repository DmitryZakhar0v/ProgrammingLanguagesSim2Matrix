#pragma once
#include "../Generator/Generator.h"
#include <iostream>
#include <vector>

namespace miit
{
	class Matrix
	{
	public:
		Matrix(size_t user_rows, size_t user_columns, Generator* generator);
		Matrix();
		void add_row(std::vector<int> user_data, size_t index);
		void add_row(std::vector<int> user_data);
		void add_columns(std::vector<int> user_data, size_t index);
		void add_columns(std::vector<int> user_data);
		int get_abs_max_element();
		bool is_element_in_row(int value, size_t row_id);
		size_t rows_counts() const;
		size_t columns_counts() const;
		void transpose();
		friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;
		std::vector<int>& operator[](size_t index);
		std::string to_string() const noexcept;
		
	private:
		std::vector<std::vector<int>> data;
	};

	
};