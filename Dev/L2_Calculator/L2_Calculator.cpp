/*******************************************************************
* Autor: Alexey Vadimovich
* Annotation: This program is an integer calculator
* Date: 24-09-2020 
********************************************************************/

#include <iostream>
#include <string>

int main()
{
	int a, b;
	std::string choisee;


	std::cout << "write the operation in format 2(enter)+(enter)2(enter)" << std::endl;
	std::cin >> a;
	std::cin >> choisee;
	std::cin >> b;

	int addition = a + b;
	int subtraction = a - b;
	int division = a / b;
	int multiplication = a * b;

	system("cls");
	std::cout << "Thanks, I am currently calculating the answer ..... the answer was found:" << std::endl;
	std::cout << std::endl;

	if (choisee == "+") { std::cout << a << "+" << b << "=" << addition << std::endl; }
	if (choisee == "-") { std::cout << a << "-" << b << "=" << subtraction << std::endl; }
	if (choisee == "*") { std::cout << a << "*" << b << "=" << multiplication << std::endl; }
	if (choisee == "/") { std::cout << a << "/" << b << "=" << division << std::endl; }

	return 0;
}
//TODO: Программа считает верно, пока значения не выходит за ограничения "int" например 123456*123456 он выдает неожиданный ответ.
// возможо стоит использовать другой тип данных...
//TODO: Нет  защиты от дурака, если ввести буквы он закрывает программу, придумать систему ошибок или запретить пользователю вводить неправильные символы.
//TODO: Придумать как можно вводить выражение в строку.
//TODO: Сделать задержку, как будто он действительно вычисляет в уме.
// 