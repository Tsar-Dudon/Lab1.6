#include <iostream>
#include <math.h>//для третьей задачи

int main()
{	
	int mas[100][100];
	std::cout << "enter heith: ";
	short hei;
	std::cin >> hei;
	std::cout << "enter lenth: ";
	short len;
	std::cin >> len;

	int numb;
	for(short n = 0; n < hei; n++)
	{
		for(short m = 0; m < len; m++)
		{
			std::cin >> numb;
			mas[n][m] = numb;
		}
	}

	int sum = 0;
	int newsum = 0;
	int stroka = 0;
	for(short n = 0; n < hei; n++)
	{
		newsum = 0;
		for(short m = 0; m < len; m++)
		{
			newsum += mas[n][m];
		}
		if(abs(newsum) > abs(sum))
		{
			sum = newsum;
			stroka = n;
		}
		else
			continue;
	}

	for(short m = 0; m < len; m++)
	{
		mas[stroka][m] = 9999;
	}

	for(short n = 0; n < hei; n++)
	{
		for(short m = 0; m < len; m++)
		{
			std::cout << mas[n][m] << " ";
		}
		std::cout << "" << std::endl;
	}
	return 0;
}