//Найти элементы массива, которые меньше среднего арифметического этого массива
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int sar=0;									//среднее арифметическое 
	int sum=0;									
	cout << "Введите размер массива: ";
	cin >> n;
	if (n < 0) {
		cout << "Ошибка!" << endl;               //защита от дурака
		system("pause");
		return 0;
	}
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand()%10000;             		//заполняем массив случайными числами и выводим
		cout << arr[i] << " ";
	}
	cout<<endl;
	for (int i = 0; i < n; i++) {				//считаем среднее арифметическое
		sum=sum+arr[i];
		sar=sum/n;
	}
	cout<<"Среднее арифметическое: "<<sar<<endl;
	cout<<"Элементы, которые меньше ср.арифм.: ";
	for (int i = 0; i < n; i++) {
		if (arr[i]<sar ){	                        
			cout<<arr[i]<<" ";
		}
	}
}
