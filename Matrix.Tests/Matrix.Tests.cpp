#include "pch.h"
#include "CppUnitTest.h"
#include "../Tasks/Tasks.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace miit;

namespace MatrixTests
{
	TEST_CLASS(MatrixTests)
	{
	public:
		TEST_METHOD(MatrixToString_ValidData_Success)
		{
			Matrix matrix{ 4,2, {1,2,3,4,5,6,7,8} };
			Assert::IsTrue(matrix.to_string() == "1\t2\t\n3\t4\t\n5\t6\t\n7\t8\t\n");
		}
		TEST_METHOD(MatrixAddRow_ValidData_Success)
		{
			Matrix matrix{ 3,3, {1,1,1,1,1,1,1,1,1} };
			Matrix success_matrix = { 4,3, {1,1,1,1,1,1,1,1,1,5,5,5} };
			std::vector<int> temp {5, 5, 5};
			matrix.add_row(temp);
			Assert::IsTrue(success_matrix == matrix);
		}

		TEST_METHOD(MatrixAddRowByIndex_ValidData_Success)
		{
			Matrix matrix{ 3,3, {1,1,1, 1,1,1, 1,1,1} };
			Matrix success_matrix = { 4,3, {1,1,1, 5,5,5, 1,1,1, 1,1,1} };
			std::vector<int> temp{ 5, 5, 5 };
			matrix.add_row(temp, 1);
			Assert::IsTrue(success_matrix == matrix);
		}

		TEST_METHOD(MatrixAddColumn_ValidData_Success)
		{
			Matrix matrix{ 3,3, {1,1,1, 1,1,1, 1,1,1} };
			Matrix success_matrix = { 3,4, {1,1,1,5, 1,1,1,5, 1,1,1,5} };
			std::vector<int> temp{ 5, 5, 5 };
			matrix.add_column(temp);
			Assert::IsTrue(success_matrix == matrix);
		}

		TEST_METHOD(MatrixAddColumnByIndex_ValidData_Success)
		{
			Matrix matrix{ 3,3, {1,1,1, 1,1,1, 1,1,1} };
			Matrix success_matrix = { 3,4, {1,5,1,1, 1,5,1,1, 1,5,1,1} };
			std::vector<int> temp{ 5, 5, 5 };
			matrix.add_column(temp, 1);
			Assert::IsTrue(success_matrix == matrix);
		}

		TEST_METHOD(MatrixGetMaxAbsElement_ValidData_Success)
		{
			Matrix matrix{ 3,3, {22, 1, -30, 7, 23, 5, -3, 4, -12} };
			int success_value = -30;
			int temp = matrix.get_abs_max_element();
			Assert::IsTrue(temp == success_value);
		}

		TEST_METHOD(MatrixIsElementInRow_ValidData_Success)
		{
			Matrix matrix{ 3,3, {32, 1, -30, 7, 23, 5, -3, 4, -12} };
			int temp_1 = matrix.is_element_in_row(23,1);
			int temp_2 = matrix.is_element_in_row(23, 0);
			Assert::IsTrue(temp_1 == true && temp_2 ==  false);
		}

		TEST_METHOD(MatrixGetRowsCount_ValidData_Success)
		{
			Matrix matrix{ 3,3, {32, 1, -30, 7, 23, 5, -3, 4, -12} };
			int temp_1 = matrix.is_element_in_row(23, 1);
			int temp_2 = matrix.is_element_in_row(23, 0);
			Assert::IsTrue(temp_1 == true && temp_2 == false);
		}

		TEST_METHOD(MatrixRowsCounts_ValidData_Success)
		{
			Matrix matrix{ 3,3, {32, 1, -30, 7, 23, 5, -3, 4, -12} };
			int temp = matrix.rows_counts();
			Assert::IsTrue(temp == 3);
		}

		TEST_METHOD(MatrixColumnsCounts_ValidData_Success)
		{
			Matrix matrix{ 3,3, {32, 1, -30, 7, 23, 5, -3, 4, -12} };
			int temp = matrix.columns_counts();
			Assert::IsTrue(temp == 3);
		}

		TEST_METHOD(MatrixTranspose_ValidData_Success)
		{
			Matrix matrix{ 2,4, {1,2,3,4,5,6,7,8} };
			matrix.transpose();
			Assert::IsTrue(matrix.to_string() == "1\t5\t\n2\t6\t\n3\t7\t\n4\t8\t\n");
		}

		TEST_METHOD(MatrixEqualOperator_ValidData_Success)
		{
			Matrix matrix_1{ 4,2, {1,2,3,4,5,6,7,8} };
			Matrix matrix_2{ 4,2, {1,2,3,4,5,6,7,8} };
			Matrix matrix_3{ 4,2, {0,-2,2,4,12,6,4,8} };
			Assert::IsTrue(matrix_1 == matrix_2 && !(matrix_1 == matrix_3));
		}
		
		TEST_METHOD(MatrixIndexOperator_ValidData_Success)
		{
			Matrix matrix{ 4,2, {1,2,3,4,5,6,7,8} };
			int success = 3;
			Assert::IsTrue(matrix[1][0] == success);
		}

	};
}
