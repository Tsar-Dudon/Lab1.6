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
				if (mas1[i] > mas1[j])//сравнение сумм цифр чисел
				{
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
					tmp = mas1[i];
					mas1[i] = mas1[j];
					mas1[j] = mas1[i];
				}
				else if (mas1[i] == mas1[j])//сумма цифр одинаковая - сравниваю первые цифры
				{
					int k = mas[i];//первая цифра первого числа
					while(k > 9)
						k /= 10;
					short firstDigit = k;
					k = mas[j];//первая цифра второго числа
					while(k > 9)
						k /= 10;
					short firstDigit1 = k;
					if(firstDigit > firstDigit1)//сравниваю
					{
						int tmp = mas[i];
						mas[i] = mas[j];
						mas[j] = tmp;
						tmp = mas1[i];
						mas1[i] = mas1[j];
						mas1[j] = mas1[i];
					}
					else if(firstDigit == firstDigit1)//первая цифра одинаковая - сравниваю сами числа
					{
						if(mas[i] > mas[j])
						{
							int tmp = mas[i];
							mas[i] = mas[j];
							mas[j] = tmp;
							tmp = mas1[i];
							mas1[i] = mas1[j];
							mas1[j] = mas1[i];
						}
						else
							continue;
					}
					else
						continue;
				}
				else
					continue;
			}
	
	for(short i = 0; i < len; i++)//вывожу отсортированный массив
	{
		std::cout << mas[i] << std::endl;
	}
	return 0;
}