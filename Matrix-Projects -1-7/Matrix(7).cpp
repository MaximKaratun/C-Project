Skip to content
This repository
Search
Pull requests
Issues
Marketplace
Explore
 @MaximKaratun
Sign out
0
0 0 VeronikaPetrenko/work_with_matrix
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights
work_with_matrix/main7.cpp
4ee751e  9 days ago
@VeronikaPetrenko VeronikaPetrenko Update main7.cpp
     
44 lines (43 sloc)  1.35 KB
//Дана квадратная матртца размером n,нужно поменять местами её главную и побочную диагонали.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j;
	cout<<"Введите размер матрицы:  ";
	cin>>n;
	if(n<=0){					//защита от дурака
		cout<<"Ошибка!"<<endl;
		system("pause");
		return 0;
	}
	cout<<endl;
	int **arr=new int *[n];				//создаём квадратную матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	arr[i]=new int [n];
	for(int i=0; i<n;i++)
		for( j=0;j<n;j++){
			arr[i][j]=((rand()%100));}
	cout<<"Ваша матрица: "<<endl;			 //выводим матрицу
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(arr[i][j]<10){		//для красоты выводимости матрицы
				cout<<" ";}
			cout<<arr[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(j==i){
			swap(arr[i][j],arr[i][n-j-1]);}} //меняем побочную и главную диагонали
	}
	cout<<"Изменённая матрица : "<<endl;
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(arr[i][j]<10){		//для красоты выводимости матрицы
				cout<<" ";}
			cout<<arr[i][j]<<" ";}
	cout<<endl;
	}
}
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
API
Training
Shop
Blog
About
Press h to open a hovercard with more details.
