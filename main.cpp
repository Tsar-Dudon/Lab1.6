#include <iostream>

int main()
{	int mas[1000];
	std::cout << "enter lenth: ";
	short len;
	std::cin >> len;

	int numb;
	for(short i = 0; i < len; i++) //добавляю значения в массив
	{
		std::cin >> numb;
		mas[i] = numb;
	}

	int mas1[1000];//создаю массив с суммой цифр чисел из 1-го массива
	for(short i = 0; i < len; i++) 
	{
		int k = mas[i];
		short sum = k % 10;
		while(k > 9)
		{
			k /= 10;
			sum += k % 10;
		}
		mas1[i] = sum;
	}

	for(short i = 0; i < len - 1; i++)//ультра супер-умпер-пупер мега сортировка
		for(short j=i+1; j < len; j++)
			{
				if (mas1[i] > mas1[j])
				{
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
					tmp = mas1[i];
					mas1[i] = mas1[j];
					mas1[j] = mas1[i];
				}
				else if (mas1[i] == mas1[j])
				{
					int k = mas[i];
					while(k > 9)
						k /= 10;
					short firstDigit = k;
					k = mas[j];
					while(k > 9)
						k /= 10;
					short firstDigit1 = k;
					if(firstDigit > firstDigit1)
					{
						//доделывай >:(
					}
				}
			}
	return 0;
}