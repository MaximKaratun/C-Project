//Дана бесконечная последовательность рандомну 
//расставленных символов из алфавита А [a, b, c].
//Реализовать генератор случайно последовательности из символов 
//и посчитать кол-во триад aaa, bbb, ccc, каждые триады считать отдельно.
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main (){
	int i,ka,kb,kc;
	unsigned int n;
	ka=0,kb=0,kc=0;
	setlocale (LC_ALL,"Russian");
	char *mas = new char[n];
	n=4000000000;						//максимальное из позволимых типов данных
	for (i=0; i<n;i++){
		mas[i]=char('a' + rand() % ('d' - 'a'));	//создание рандомной последовательности из элементов a,b,c
		cout<<mas[i]<<" ";
		if(kbhit()){					//окончание заполнения последовательности нажатием клавиши
			n=i;					//изменение размера массива 
			break;
		}
	
	}
	for(i=0; i<n;i++){
		if( mas[i]=='a'&&mas[i+1]=='a'&&mas[i+2]=='a'){		//проверка триад
			ka++;	
		}
		else if( mas[i]=='b'&&mas[i+1]=='b'&&mas[i+2]=='b'){
			kb++;
		}
		else if( mas[i]=='c'&&mas[i+1]=='c'&&mas[i+2]=='c'){
			kc++;
		}
	}
	cout<<endl;
	cout<<"Кол-во триад буквы a: "<<ka<<endl;
	cout<<"Кол-во триад буквы b: "<<kb<<endl;
	cout<<"Кол-во триад буквы c: "<<kc<<endl;
}
