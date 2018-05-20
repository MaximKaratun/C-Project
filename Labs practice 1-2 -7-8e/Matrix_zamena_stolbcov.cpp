//Создаётся числовая матрица необходимо поменять местами два произвольных столбца местами. Т.е. элементы 1 столбца поставить 
//на соответствующие позиции 2 столбца и наоборот.
//Мы создаём матрицу с помощью двумерного массива из радомных чисел размером,который задаёт пользователь. Потом узнаём столбцы которые 
//надо поменять и при помощи создания дополнительной переменной меняем их местами.
#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,p,q;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];                    //создаём матрицу из рандомных чисел
	for(int i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for(int j=0;j<m;j++){
			matrix[i][j]=((rand()%10));}
	cout<<"Ваша матрица: "<<endl;                 //выводим матрицу
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;	
	cout<<"Какие столбцы поменять местами: ";     //считываем какие столбцы поменять местами
	cin>>p>>q;
	cout<<endl;
	int temp;
	for (int i=0;i<n;i++){                        //меняем столбцы 
		temp=matrix[i][p-1];
		matrix[i][p-1]=matrix[i][q-1];              //меняем столбец на p-1 и q-1, так как отсчёт i начинается от 0
		matrix[i][q-1]=temp;}
	cout<<"Изменённая матрица:"<<endl;             //вывод изменённой матрицы
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}	
	cout<<endl;
	system("PAUSE");
	return 0;
}
