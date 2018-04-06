#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int array[100];
	
	for(int i = 0; i < 100 ; i++)	*(array + i) = rand() % 20 - 10; //çàïîëíåíèå ìàññèâà
	
	for(int i = 0; i < 10; i++)      //âûâîä ìàññèâà
	{
		for(int j = 0; j < 10 ; j++)	 printf("%7d", *(array + 10*i + j));
		printf("\n");
	}
	
	int sum = 0;
	int flag = 0;
	
	for(int i = 0; i < 100 ; i++)
	{
		if(flag)	sum += abs(*(array + i));
		if(*(array + i) < 0)	flag = 1;	
	}
	
	printf("----------------------------------------------\nÑóììà ïîëîæèòåëüíûõ ýëåìåíòîâ ìàññèâà: %d\n", sum);
	
	system("pause");
	
	return 0;
}

int abs(int x)
{
	return x < 0 ? -x : x;
}
