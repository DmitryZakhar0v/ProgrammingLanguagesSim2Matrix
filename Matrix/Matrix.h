#pragma once
#include <iostream>
#include <vector>

namespace miit
{
	class Matrix
	{
	public:
		Matrix();
		void fill_random(size_t user_rows, size_t user_columns);
		void fill_manual(size_t user_rows, size_t user_columns, std::initializer_list<int> user_data);
		void add_row(std::vector<int> user_data, size_t index);
		void add_row(std::vector<int> user_data);
		void add_columns(std::vector<int> user_data, size_t index);
		void add_columns(std::vector<int> user_data);
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