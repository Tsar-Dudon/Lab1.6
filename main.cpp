#include <iostream>
#include <math.h>//для третьей задачи

int main()
{	
	/* Задача 4
	int mas[10000];
	std::cout << "enter lenth: ";
	short len;
	std::cin >> len;

	int numb;
	for(short i = 0; i < len; i++) //добавляю значения в массив
	{
		std::cin >> numb;
		mas[i] = numb;
	}

	short j = 0;
	for(short i = 0; i < len; i++)
	{
		int firstDigit = mas[i];
		while(firstDigit > 9)
			{
				firstDigit /= 10;
			}
		int lastDigit = mas[i] % 10;
		if(firstDigit == lastDigit)
			continue;
		mas[j] = mas[i];
		j++;
	}
	len = j;

	for(short i = 0; i < len; i++)
	{
		int firstDigit = mas[i];
		while(firstDigit > 9)
		{
			firstDigit /= 10;
		}
		if(firstDigit == 3)
		{
			for(j = len; j > i; j--)
			{
				mas[j] = mas[j - 1];
			}
			i++;
			len++;
		}
	}

	for(short i = 0; i < len; i++)
	{
		std::cout << mas[i] << std::endl;
	}
*/
	return 0;
}