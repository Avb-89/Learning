//
//  main.cpp
//  First_program
//
//  Created by Alexey Vadimovich on 9/22/25.
//

#include "iostream" // iostream — библиотека для работы с потоками ввода/вывода (например, std::cout, std::cin)
#include "chrono"   // chrono — библиотека для работы со временем (интервалы, часы, задержки)
#include "thread"   // thread — библиотека для работы с потоками и функциями управления ими (например, sleep_for)

// main() — точка входа в программу, всё выполнение начинается отсюда
int main()
{
    std::cout << "Это моя первая програма\n она делает вид, что работает,\n как и многие из нас :)\n\n";
    std::cout << "start process.." << std::endl;
    // Каждая задержка имитирует "работу", чтобы показать прогресс
    std::this_thread::sleep_for(std::chrono::seconds(2)); // приостанавливает выполнение текущего потока на 2 секунды
    std::cout << "working......" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "working............." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    std::cout << "working............................." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(15));
    std::cout << "Done!" << std::endl;
    
    return 0; // сообщает системе, что программа завершилась успешно
}

// Практическая рекомендация:
// • В time-критичных по производительности местах (например, внутри циклов) используйте '\n' (или "\n"),
//   так как std::endl делает flush буфера, что может замедлить выполнение.
// • Используйте std::flush или std::endl только когда действительно нужно, чтобы текст сразу появился
//   (например, при отображении прогресса или отладке).
