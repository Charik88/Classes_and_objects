//
//  hw2.1.cpp
//  HOME_WORK2.2
//
//  Created by Anastasiya Charykova on 04.06.2024.
//

#include "hw2.1.hpp"
#include <iostream>

class Calculator { // класс для вычисления дробных чисел
private: // закрытые поля класса
double num1; // первое число
double num2; // второе число

public: // открытые поля класса
Calculator() { // конструктор класса
num1 = 0.0; // инициализация полей класса
num2 = 0.0; // инициализация полей класса
}

double add() { // метод для сложение 2 дробных чисел
return num1 + num2; // возвращает результат сложения
}

double multiply() { // метод для умножения 2 дробных чисел
return num1 * num2;
}

double subtract_1_2() { // метод для вычитания 2 дробных чисел
return num1 - num2;
}

double subtract_2_1() {
return num2 - num1;
}

double divide_1_2() { // метод для деления 2 дробных чисел
if (num2 != 0) // если второе число не равно 0
return num1 / num2; // возвращаем результат деления
else {
std::cerr << "Ошибка\n";
return 0.0; // возвращаем 0, если второе число равно 0
}
}

double divide_2_1() {
if (num1 != 0)
return num2 / num1;
else {
std::cerr << "Ошибка\n";
return 0.0;
}
}

bool set_num1(double num) { // метод для установка значения первого числа
if (num != 0) { // если значение не равно 0
num1 = num; // устанавливаем значение
return true; // возвращаем true
} else { // иначе
return false; // возвращаем false
}
}

bool set_num2(double num) { // метод для установки значения второго числа
if (num != 0) {
num2 = num;
return true;
} else {
return false;
}
}
};

int main() {
Calculator calc;

while (true) { // бесконечный цикл
double num1, num2;

std::cout << "Введите num1: ";
std::cin >> num1;
std::cout << "Введите num2: ";
std::cin >> num2;

if (calc.set_num1(num1) && calc.set_num2(num2)) {
std::cout << "num1 " << "+" << " num2" << " = " << calc.add() << std::endl;
std::cout << "num1" << " * " << "num2"<< " = " << calc.multiply() << std::endl;
std::cout << "num1" << " - " << "num2" << " = "<< calc.subtract_1_2() << std::endl;
std::cout << "num2" << " - " << "num1" << " = " << calc.subtract_2_1() << std::endl;
std::cout << "num1" << " / " << "num2" << " = " << calc.divide_1_2() << std::endl;
std::cout << "num2" << " / " << "num1" << " = " << calc.divide_2_1() << std::endl;
} else {
std::cerr << "Ошибка ввода!\n";
}
}

return 0;
}
