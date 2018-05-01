/*
Задача:
Необходимо сформировать матрицу mxn из чесел от 0 до 999 рандомно:
A)Вывести эту матрицу на экран
B)Посчитать количество 2-х значных элементов
C)Посчитать количество 3-х значных элементов
D)Найти ср.арифмитическое 2-х значных эл-ов 
E)Найти ср.арифмитическое 3-х значных эл-ов.
*/

#include <iostream>
#define S 4
#define C 5
int  random;
int *R = &random;

int main() {


	std::cout << "Matrix string's: " << S << std::endl;
	std::cout << "Matrix column's: " << C << std::endl;
	int matrix[S][C];

	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			*R = rand() % 999 + 0;
			matrix[i][j] = *R;

		}
	}

	std::cout << std::endl;


	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			std::cout << "\t\t" << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	//-------------------------|| B)Посчитать количество 2-х значных элементов || D)Найти ср.арифмитическое 2-х значных эл-ов 
	double Sumquantity2 = 0;
	double quantity2 = 0;


	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			if (matrix[i][j] >= 10 && matrix[i][j] < 100) {
				Sumquantity2 = Sumquantity2 + matrix[i][j];
				quantity2++;
			}
		}
	}
	std::cout << "\n\n\n\t\tQuantity 2 elements: " << quantity2;
	std::cout << "\t\tAverage sum 2 elements:" << Sumquantity2 / quantity2 << std::endl;
	//-------------------------|| C)Посчитать количество 3-х значных элементов || E)Найти ср.арифмитическое 3-х значных эл-ов
	int Sumquantity3 = 0;
	int quantity3 = 0;

	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			if (matrix[i][j] >= 100) {
				Sumquantity3 = Sumquantity3 + matrix[i][j];
				quantity3++;
			}
		}
	}
	std::cout << "\n\t\tQuantity 3 elements: " << quantity3;
	std::cout << "\t\tAverage sum 3 elements:" << Sumquantity3 / quantity3 << std::endl;
	//-------------------------



	std::cout << std::endl;
	system("pause");
	return 0;
}
