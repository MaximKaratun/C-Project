//Дана матрица mxn заполненная рандомна числами от -999 до 999 включительно,необходимо изменить последовательность столбцов так,
//чтобы элементы 1 строки были отсортированны по возрастанию,после чего нужно изменить последовательность строк так,
//чтобы 1 столбец был отсортирован по возрастанию.
#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,p,g,temp;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	cout<<endl;
	int **arr=new int *[n];                    //создаём матрицу из рандомных чисел
	for(int i=0;i<n;i++)
	arr[i]=new int [m];
	for(int i=0; i<n;i++)
		for(int j=0;j<m;j++){
			arr[i][j]=((rand()%100-50));}
	cout<<"Ваша матрица: "<<endl;                 //выводим матрицу
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	bool flag = true;
	while (flag) {
		flag = false;
		for (int j = 0; j < m - 1; ++j) {
			if (arr[0][j] > arr[0][j + 1]) {	//сравниваем элемент и следующий за ним на 1 строке
				flag = true;
				for (int i = 0; i < n; ++i) {	//меняем местами 
					int temp = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = temp;
				}
			}
		}
	}
	cout<<"Первая строка стоит по возрастанию:"<<endl;     //для проверки правильности перестановки         
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";}
		cout<<endl;}	
	cout<<endl;
	flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < n - 1; ++i) {
			if (arr[i][0] > arr[i + 1][0]) {	//сравниваем элемент и следующий за ним на 1 столбце
				flag = true;
				for (int j = 0; j < n; ++j) {	//меняем местами 
					int temp = arr[i][j];
					arr[i][j] = arr[i+1][j];
					arr[i+1][j] = temp;
				}
			}
		}
	}
	cout<<"Первые строка и столбец стоят по возрастанию:"<<endl;             
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";}
		cout<<endl;}	
	cout<<endl;
}
