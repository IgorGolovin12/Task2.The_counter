#include <iostream>
#include <string>
#include <windows.h>

class Counter
{
private:
	int variable;
public:
	Counter()
	{
		variable = 1;
	}
	Counter(int var)
	{
		variable = var;
	}
	void count_plus()
	{
		variable++;
	}
	void count_minus()
	{
		variable--;
	}
	void print_count()
	{
		std::cout << variable << std::endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Counter count;
	std::string option1;
	while (true)
	{	
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	    std::cin >> option1;
		if (option1 == "да" || option1 == "Да" || option1 == "ДА")
		{
			int variable;
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> variable;
			count = Counter(variable);
			break;
		}
		else if (option1 == "нет" || option1 == "Нет" || option1 == "НЕТ")
		{   break;	}
		else
		{
			std::cout << "Ошибка ввода! Повторите попытку." << std::endl;			
		}
	}
	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		char option2;
		std::cin >> option2;
		if (option2 == '+')
		{	
			count.count_plus();
		}
		if (option2 == '-')
		{	
			count.count_minus(); 
		}
		if (option2 == '=')
		{
			count.print_count();			
		}
		if (option2 == 'x' || option2 == 'X' || option2 == 'х' || option2 == 'Х')
		{
			std::cout << "До свидания!";
			break;
		}
		if (option2 != 'x' && option2 != 'X' && option2 != 'х' && option2 != 'Х' && option2 != '=' && option2 != '-' && option2 != '+')
		{
			std::cout << "Ошибка ввода! Повторите попытку." << std::endl;
		}
	}	
	return EXIT_SUCCESS;
}