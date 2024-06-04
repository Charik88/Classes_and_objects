//
//  hw2.2.cpp
//  HOME_WORK2.2
//
//  Created by Anastasiya Charykova on 04.06.2024.
//

#include "hw2.2.hpp"
#include <iostream>
#include <string>

class Counter { // класс для счетчика
private: // закрытое поле
    int value; // значение счетчика

public:
    Counter(int initialValue = 1) : value(initialValue) {} // конструктор класса

    void increment() { // метод для увеличения значения счетчика
        ++value;
    }

    void decrement() { // метод для уменьшения значения счетчика
        --value;
    }

    int getValue() const { // метод для получения значения счетчика
        return value; //
    }
};

int main(int argc, char* argv[]) {
    int initialValue; // инициализация переменной для инициализации счетчика
    std::string command; // команда
    bool userSetInitialValue = false; // проверка на начальное значение

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> command;


    if (command == "да" || command == "ДА") { // пользователь указывает начальное значение
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue; // ввод начального значения
        userSetInitialValue = true;
    } else {
      initialValue = 1; // Значение по умолчанию, если пользователь не хочет устанавливать начальное значение
  }


    Counter counter(userSetInitialValue ? initialValue : 1); // создание обьекта класса counter
    std::cout << "Введите команду (+, -, =, x): ";
        while (std::cin >> command) {
            if (command == "+") {
                counter.increment();
            } else if (command == "-") {
                counter.decrement();
            } else if (command == "=") {
                std::cout << counter.getValue() << std::endl;
            } else if (command == "x") {
                std::cout << "До свидания!" << std::endl;
                return 0;
             }
            std::cout << "Введите команду (+, -, =, x): ";
        }
        return 0;
    }

