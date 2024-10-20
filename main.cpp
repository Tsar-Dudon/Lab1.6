#include <iostream>

int main()
{
	const short n1 = 10000; //создаю массив
	int mas[n1];
	std::cout << "enter lenth: ";
	short len;
	std::cin >> len;

	int numb;
	for(short i = 0; i < len; i++) //добавляю значения в массив
	{
		std::cin >> numb;
		mas[i] = numb;
	}

	short sum = 0;
	short no19 = 0;
	for(short i = 0; i < len; i++)//проверяю есть ли число с суммой цифр 19
	{
		int k = mas[i];
		while(k > 9)
		{
			sum += (k % 10);
			k /= 10;
		}
		if (sum == 19)
		{
			no19 += 1;
			break;
		}
		else
		{
			sum = 0;
		}
	}

	if(no19 == 0)//сортировка
	{
		for(short i=0; i < len-1; i++)
			for(short j=i+1; j < len; j++)
				if(mas[i] < mas[j])
				{
					int tmp = mas[i];
					mas[i] = mas[j];
					mas[j] = tmp;
				}
	}

	for(short i = 0; i < len; i++)
	{
		std::cout << mas[i] << std::endl;
	}
	return 0;
}