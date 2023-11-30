#pragma once
#include "../Generator/Generator.h"
#include <iostream>
#include <vector>

namespace miit
{
	/**
	* @brief Класс описывающий матрицу
	*/
	class Matrix
	{
	public:
		/**
		* @brief Инициализирует объект тип матрица по параметрам пользователя 
		* @param user_rows Количество строк в матрице
		* @param user_columns Количество столбцов в матрице
		* @param generator Генератор, которым необходимо заполнить матрицу 
		*/
		Matrix(size_t user_rows, size_t user_columns, Generator* generator);

		/**
		* @brief Инициализирует пустой объект тип матрица
		*/
		Matrix();

		/**
		* @brief Добавляет строку в матрицу по индексу, если индекс не указан, то добавит элемент в конец
		* @param user_data Строка для добавления
		* @param index Индекс на который строка будет добавлена
		*/
		void add_row(std::vector<int> user_data, size_t index);

		/**
		* @brief Добавляет строку в матрицу по индексу, если индекс не указан, то добавит элемент в конец
		* @param user_data Строка для добавления
		* @param index Индекс на который строка будет добавлена
		*/
		void add_row(std::vector<int> user_data);

		/**
		* @brief Добавляет столбец в матрицу по индексу, если индекс не указан, то добавит элемент в конец
		* @param user_data Столбец для добавления
		* @param index Индекс на который столбец будет добавлен
		*/
		void add_columns(std::vector<int> user_data, size_t index);

		/**
		* @brief Добавляет столбец в матрицу по индексу, если индекс не указан, то добавит элемент в конец
		* @param user_data Столбец для добавления
		* @param index Индекс на который столбец будет добавлен
		*/
		void add_columns(std::vector<int> user_data);

		/**
		* @brief Получение максимального по модолю элемента в матрице
		* @return Максимальный по модолю елемент в матрице
		*/
		int get_abs_max_element();

		/**
		* @brief Проверка на наличие элемента в строке матрицы
		* @return true - если есть в сроке, false - если нет
		*/
		bool is_element_in_row(int value, size_t row_id);

		/**
		* @brief Получение количества строк в матрице
		* @return Количество строк в матрице
		*/
		size_t rows_counts() const;

		/**
		* @brief Получение количества столбцов в матрице
		* @return Количество столбцов в матрице
		*/
		size_t columns_counts() const;

		/**
		* @brief Транспонирование матрицы
		*/
		void transpose();

		/**
		* @brief Перегрузка оператора вывода
		* @param os Поток вывода
		* @param matrix Матрица, данные которой будут выведены в поток
		* @return Поток вывода с информацией матрицы
		*/
		friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

		/**
		* @brief Перегрузка оператора квадратные скобки
		* @param index Индекс элемента в массиве
		* @return Элемент из матрцы стоящий под нужным индексом
		*/
		std::vector<int>& operator[](size_t index);

		/**
		* @brief Перегрузка оператора квадратные скобки для объекта с const
		* @param index Индекс элемента в массиве
		* @return Элемент из матрцы стоящий под нужным индексом
		*/
		const std::vector<int>& operator[](size_t index) const;

		/**
		* @brief Преобразование объекта матрицы в строку
		* @return Строка с информацией о матрице
		*/
		std::string to_string() const noexcept;
		
	private:
		std::vector<std::vector<int>> data;
	};

	
};