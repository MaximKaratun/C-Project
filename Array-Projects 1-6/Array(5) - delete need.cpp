#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[100];
	
	for(int i = 0; i < 100 ; i++)	*(array + i) = rand() % 2000 - 1000; //çàïîëíåíèå ìàññèâà
	
	for(int i = 0; i < 10; i++)      //âûâîä ìàññèâà
	{
		for(int j = 0; j < 10 ; j++)	 printf("%6d", *(array + 10*i + j));
		printf("\n");
	}
	
	int min = 10000;

	for(int i = 0; i < 100 ; i++)
	{
		if(*(array + i) < min)	min = *(array + i);
	}
	
	printf("----------------------------------------------\nÍàèìåíüøèé ýëåìåíò ìàññèâà: %d\n", min);
	
	system("pause");
	
	return 0;
}
