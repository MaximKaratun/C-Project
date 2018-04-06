#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#define SIZE 100

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double array[100];
	
	*array = 1;
	
	for(int i = 1; i < 100 ; i++)	*(array + i) = *(array + i - 1) + 0.001; //çàïîëíåíèå ìàññèâà
	
	for(int i = 0; i < 10; i++)      //âûâîä ìàññèâà
	{
		for(int j = 0; j < 10 ; j++)	 printf("%6.3lf ", *(array + 10*i + j));
		printf("\n");
	}
	
	double sum = 0;
	double medium = 0;
	double  multiplication = 1;

	for(int i = 0; i < 100 ; i++)
	{
		sum += *(array + i);
		multiplication *= *(array + i);
	}
	
	medium = sum/SIZE;

	
	printf("----------------------------------------------\nÑóììà ýëåìåíòîâ ìàññèâà: %.3lf\nÏðîèçâåäåíèå ýëåìåíòîâ ìàññèâà: %.3lf\nÑðåäíåå àðèôìåòè÷åñêîå âñåõ ýëåìåíòîâ ìàññèâà %.3lf\n", sum, multiplication, medium);
	
	system("pause");
	
	return 0;
}
