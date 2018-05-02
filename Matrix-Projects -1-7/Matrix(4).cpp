/*  Задача:
    Даны две матрицы размер n заполненные рандомно,необходимо сформировать 3-ю матрицу такого же размера,
	В ячейке которой записать большие элементы из соответствующих ячеек двух других матриц.                 */

#include <iostream> //Подключаем библиотеку функции ввода-вывода, работающая в пространстве именования std::;
#define onematrix ONE //Сохраняем размер имени матрихONE в имя ONE
#define twomatrix TWO //Сохраняем размер имени матрихTWO в имя TWO

int random;  //Работаем с указателем =)
int *R = &random;  //Работаем с указателем =)

int main(void) {
	std::cout << "\n\n\n\t\t\t\tMATRIX ONLY EQUALLY SIZE, ELSE WILL ERROR.\n\n\n"; //Защита чутка от дурака. (Можно развить и до прямоугольных? А нет... Если только умножать или складывать.) - Критическая точка. ( Если размеры не одинаковы )
make:;
	std::cout << "Enters numbers strings and columns one matrix: "; //1-я матрица.
	     int onematrix;
            std::cin >> onematrix;
			       int *matrixone = new int[ONE*ONE];

	std::cout << "\nEnters numbers strings and columns two matrix: "; //2-я матрица.
		int twomatrix;
			std::cin >> twomatrix;
			        int *matrixtwo = new int[TWO*TWO];

					if (ONE != TWO){ std::cout << "\n\n\n\t\t\t\t\t    ERROR, GO AGAIN TRY: \n\n\n"; goto make;} //Защита от дурака закончилась.

	std::cout << std::endl;
	///Заполняем 1-ю матрицу:
	    for (int i = 0; i < ONE; i++) {
		   for (int j = 0; j < ONE; j++) {
			   *R = rand() % 99 + 0;
			   matrixone[i*ONE+j] = *R;
		   }
	   }

	///Заполняем 2-ю матрицу:
		for (int i = 0; i < TWO; i++) {
			for (int j = 0; j < TWO; j++) {
				*R = rand() % 99 + 0;
				matrixtwo[i*TWO + j] = *R;
			}
		}



		///Выводим на экран 1-ю и 2-ю матрицу:
		std::cout << "     One matrix: \n";
		std::cout << std::endl;
		for (int i = 0; i < ONE; i++) {
			for (int j = 0; j < ONE; j++) {
				if (matrixone[i*ONE + j] <= 10 && matrixone[i*ONE + j] >= 0) std::cout << "     \t   " << matrixone[i*ONE + j] << " ";
				if (matrixone[i*ONE + j] <= 100 && matrixone[i*ONE + j] >= 10) std::cout << "     \t  " << matrixone[i*ONE + j] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "     Two matrix: \n";
		std::cout << std::endl;
		for (int i = 0;i < TWO; i++) {
			for (int j = 0;j < TWO; j++) {
				if (matrixtwo[i*TWO + j] <= 10 && matrixtwo[i*TWO + j] >= 0) std::cout << "     \t   " << matrixtwo[i*TWO + j] << " ";
				if (matrixtwo[i*TWO + j] <= 100 && matrixtwo[i*TWO + j] >= 10) std::cout << "     \t  " << matrixtwo[i*TWO + j] << " ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "     Three matrix, which is more then matrixone or matrix two: \n";
		std::cout << std::endl;
		///Сравниваем числа и выводим большее.
		int max = 0;
		int *matrixthree = new int[ONE*TWO];
		for (int i = 0; i < ONE || i < TWO; i++) {
			for (int j = 0; j < ONE || j < TWO; j++) {
				if (matrixone[i*ONE + j] >= matrixtwo[i*TWO + j]) matrixthree[i*ONE + j] = matrixone[i*ONE + j];
				else                                              matrixthree[i*ONE + j] = matrixtwo[i*TWO + j];
				if (matrixthree[i*ONE + j] <= 10 && matrixthree[i*ONE + j] >= 0) std::cout << "     \t   " << matrixthree[i*ONE + j] << " ";
				if (matrixthree[i*ONE + j] <= 100 && matrixthree[i*ONE + j] >= 10) std::cout << "     \t  " << matrixthree[i*ONE + j] << " ";
			}
			std::cout << std::endl;
		}


	std::cout << std::endl;
	system("pause");
}
