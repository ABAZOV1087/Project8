#include <iostream>
#include "ABAZOV.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1, num2;
    char operation;
    char choice;

    do {
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите оператор (+, -, *, /): ";
        cin >> operation;
        cout << "Введите второе число: ";
        cin >> num2;

        try {
            switch (operation) {
            case '+':
                cout << "Результат: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Результат: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Результат: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Результат: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Ошибка: Неверный оператор!" << endl;
                break;
            }
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        cout << "Хотите выполнить еще одно вычисление? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Спасибо за использование калькулятора!" << endl;
    return 0;
}
