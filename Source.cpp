#include <iostream>
#define MODE 0
#ifndef MODE 
	#error Неизвестный режим. Завершение работы.
#endif

int main() {
	setlocale(LC_ALL, "RU");
	#if (MODE == 0) 
	{
		std::cout << "Работаю в режиме тренировки" << std::endl;
		};
	#elif (MODE==1) 
	{	
		#define ADD(a, b)  ((a) + (b));
		int a, b;
		std::cout << "Работаю в боевом режиме" << std::endl;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << std::endl;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << std::endl << "Результат сложения: " << ADD(a, b);
	} 
#else 
	{
		std::cout << "Неизвестный режим. Завершение работы." << std::endl;
	}
	#endif
}