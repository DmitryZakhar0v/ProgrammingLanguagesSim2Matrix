#include "Matrix.h"
#include <random>
#include <sstream>


miit::Matrix::Matrix() 
	:data({})
{
}

void miit::Matrix::fill_random(size_t user_rows, size_t user_columns)
{
	
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> uniformIntDistribution(-50, 50);
	for (size_t i = 0; i < this->rows_counts(); i++)
	{
		std::vector<int> temp {};
		for (size_t j = 0; j < this->columns_counts(); j++)
		{
			temp.push_back(uniformIntDistribution(gen));
		}
		this->data.push_back(temp);
	}
}

void miit::Matrix::fill_manual(size_t user_rows, size_t user_columns, std::initializer_list<int> user_data)
{
	this->data = std::vector <std::vector<int>> { user_rows };
	size_t i = 0;
	size_t j = 0;
	for (auto& item : user_data)
	{
		this->data[j].push_back(item);
		i++;
		if (i % user_columns == 0)
		{
			j++;
		}
	}
}

void miit::Matrix::add_row(std::vector<int> user_data, size_t index)
{
	if (index < 0 || index > this->rows_counts())
	{
		throw std::out_of_range("incorrect index");
	}
	this->data.insert(data.begin() + index, user_data);
}

void miit::Matrix::add_row(std::vector<int> user_data)
{
	this->data.push_back(user_data);
}

void miit::Matrix::add_columns(std::vector<int> user_data, size_t index)
{
	transpose();
	this->add_row(user_data, index);
	transpose();
}

void miit::Matrix::add_columns(std::vector<int> user_data)
{
	transpose();
	this->add_row(user_data);
	transpose();
}

size_t miit::Matrix::rows_counts() const
{
	return this->data.size();
}

size_t miit::Matrix::columns_counts() const
{
	if (this->data.size() == 0) 
	{
		return 0;
	}
	return this->data[0].size();
}

void miit::Matrix::transpose()
{
	std::vector<std::vector<int>> temp_data;
	for (size_t j = 0; j < this->data[0].size(); j++)
	{
		std::vector<int> temp {};
		for (size_t i = 0; i < this->data.size(); i++)
		{
			temp.push_back(this->data[i][j]);
		}
		temp_data.push_back(temp);
	}
	this->data = temp_data;
	
}

std::vector<int>& miit::Matrix::operator[](size_t index)
{
	return data[index];
}

std::string miit::Matrix::to_string() const noexcept
{
	std::stringstream temp;
	for (size_t i = 0; i < this->rows_counts(); i++)
	{
		for (size_t j = 0; j < this->columns_counts(); j++)
		{
			temp << this->data[i][j] << "\t";
		}
		temp << "\n";
	}
	return temp.str();
}

std::ostream& miit::operator<<(std::ostream& os, Matrix& matrix) noexcept
{
	return os << matrix.to_string();
}
