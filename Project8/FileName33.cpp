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
        cout << "������� ������ �����: ";
        cin >> num1;
        cout << "������� �������� (+, -, *, /): ";
        cin >> operation;
        cout << "������� ������ �����: ";
        cin >> num2;

        try {
            switch (operation) {
            case '+':
                cout << "���������: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "���������: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "���������: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "���������: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "������: �������� ��������!" << endl;
                break;
            }
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

        cout << "������ ��������� ��� ���� ����������? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "������� �� ������������� ������������!" << endl;
    return 0;
}
