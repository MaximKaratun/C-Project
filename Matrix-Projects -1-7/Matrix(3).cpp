/*
Задача:
Необходимо сформировать матрицу mxn из чесел от 0 до 999 рандомно:
A)Вывести эту матрицу на экран
B)Посчитать количество 2-х значных элементов
C)Посчитать количество 3-х значных элементов
D)Найти ср.арифмитическое 2-х значных эл-ов 
E)Найти ср.арифмитическое 3-х значных эл-ов.
*/

#include <iostream> //Подключаем библиотеку функции ввода-вывода, работающая в пространстве именования std::;
#define S 4 //Константное значение S = 4 (Можно и по-другому)
#define C 5 //Константное значение С = 5 (Можно и по-другому)
int  random; //Изучаю понемногу указатели и ссылки. А так это функция для рандома.
int *R = &random;

int main() {


	std::cout << "Matrix string's: " << S << std::endl;
	std::cout << "Matrix column's: " << C << std::endl;
	int matrix[S][C]; //Создаем 2-хмерный массив. (Хотел одномерный, но он то работает, то не работает).
//Придаем случайные числа от 999 до 0 нашему 2-хмерному массиву, matrix.
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			*R = rand() % 999 + 0;
			matrix[i][j] = *R;

		}
	}

	std::cout << std::endl;

//Выводим на экран по пункту "A)Вывести эту матрицу на экран":
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			std::cout << "\t\t" << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	
	//-------------------------|| B)Посчитать количество 2-х значных элементов || D)Найти ср.арифмитическое 2-х значных эл-ов 
	double Sumquantity2 = 0; //Для суммы.
	double quantity2 = 0; //Для кол-во 2-хмерных элементов.


	for (int i = 0; i < S; i++) {
		for (int j = 0; j < C; j++) {
			if (matrix[i][j] >= 10 && matrix[i][j] < 100) {
				Sumquantity2 = Sumquantity2 + matrix[i][j];
				quantity2++;
			}
		}
	}
	std::cout << "\n\n\n\t\tQuantity 2 elements: " << quantity2;
	std::cout << "\t\tAverage sum 2 elements:" << Sumquantity2 / quantity2 << std::endl; //Среднее ариф. Сумму делим на кол-во элементов.
	//-------------------------|| C)Посчитать количество 3-х значных элементов || E)Найти ср.арифмитическое 3-х значных эл-ов
	int Sumquantity3 = 0; //Тоже самое.
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
	std::cout << "\t\tAverage sum 3 elements:" << Sumquantity3 / quantity3 << std::endl; //Среднее ариф. Сумму делим на кол-во элементов.
	//-------------------------



	std::cout << std::endl;
	system("pause");
	return 0;
}
