//Дана матрица m*n,посчитать суммы в каждой строке и столбце.Вывести суммы строк в конце каждой строки,аналогично для столбцов.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j,a,s,c;						//s-сумма элементов в строке;с-сумма элементов в столбце;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	if(n<=0||m<=0){							//защита от дурака
		cout<<"Ошибка!"<<endl;
		system("pause");
		return 0;
	}
	cout<<endl;
	int **arr=new int *[n];						//создаём матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	arr[i]=new int [m];
	for(int i=0; i<n;i++)
		for( j=0;j<m;j++){
			arr[i][j]=((rand()%100));}
	cout<<"Ваша матрица: "<<endl;					//выводим матрицу
	for( i=0; i<n;i++){
		for( j=0;j<m;j++){
			if(arr[i][j]<10){				//для красоты выводимости матрицы
				cout<<" ";
			}
			cout<<arr[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	cout<<"Матрица с суммами строк и столбцов: "<<endl;
	for( i=0; i<n;i++){
		s=0;
		for( j=0;j<m;j++){					//фиксируем индекс строки и считаем её сумму
			s+=arr[i][j];
			if(arr[i][j]<10){				//для красоты выводимости матрицы
				cout<<" ";}
			cout<<arr[i][j]<<"  ";}
    	cout<<" "<< s << '\n';}
    cout<<endl;
    for( j=0; j<m;j++){							//фиксируем столбец и считаем его сумму
		c=0;
		for( i=0;i<n;i++){
			c+=arr[i][j];
    	}
    	cout<< c<<" ";}
}
