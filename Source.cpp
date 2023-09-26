#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string vibor_y;
    cout << "Решаем уравнение? [y] [n]: ";
    cin >> vibor_y;

    if (vibor_y == "y" || vibor_y == "Y") {

        int Y;
        cout << "Введите значение [y]: ";
        cin >> Y;

        if (Y <= 0) {
            cout << "Ошибка, введите положительное значение";
            return 0;
        }
        else {
            cout << "Отлично, идем дальше" << endl;
        }

        int x;
        cout << "Введите значение [x]: ";
        cin >> x;

        if (x <= 0) {
            cout << "ошибка, введите положительное значение";
            return 0;
        }
        else {
            cout << "Отлично! продолжаем." << endl;
        }

        string operation1, operation2, operation3, operation4;

        cout << "Введите операцию: ";
        cin >> operation1;
        if (operation1 != "*" &&
            operation1 != "+" &&
            operation1 != "/" &&
            operation1 != "-") {
            cout << "Ошибка - недопустимая операция." << endl;
            return 0;
        }
        cin >> operation2;
        if (operation2 != "*" &&
            operation2 != "+" &&
            operation2 != "/" &&
            operation2 != "-") {
            cout << "Ошибка - недопустимая операция." << endl;
            return 0;
        }
        cin >> operation3;
        if (operation3 != "*" &&
            operation3 != "+" &&
            operation3 != "/" &&
            operation3 != "-") {
            cout << "Ошибка - недопустимая операция." << endl;
            return 0;
        }
        cin >> operation4;
        if (operation4 != "*" &&
            operation4 != "+" &&
            operation4 != "/" &&
            operation4 != "-") {
            cout << "Ошибка - недопустимая операция." << endl;
            return 0;
        }
        int reshenie;

        cout << "Введите номер операции для решения: ";
        cin >> reshenie;

        int result; // Переменная для хранения результата вычислений

        switch (reshenie) {
        case 1:
            if (operation1 == "+") {
                result = Y + x;
            }
            else if (operation1 == "*") {
                result = Y * x;
            }
            else if (operation1 == "-") {
                result = Y - x;
            }
            else if (operation1 == "/") {
                result = Y / x;
            }
            else {
                cout << "Ошибка - недопустимая операция." << endl;
                return 0;
            }
            break;
        case 2:
            if (operation2 == "+") {
                result = Y + x;
            }
            else if (operation2 == "*") {
                result = Y * x;
            }
            else if (operation2 == "-") {
                result = Y - x;
            }
            else if (operation2 == "/") {
                result = Y / x;
            }
            else {
                cout << "Ошибка - недопустимая операция." << endl;
                return 0;
            }
            break;
        case 3:
            if (operation3 == "+") {
                result = Y + x;
            }
            else if (operation3 == "*") {
                result = Y * x;
            }
            else if (operation3 == "-") {
                result = Y - x;
            }
            else if (operation3 == "/") {
                result = Y / x;
            }
            else {
                cout << "Ошибка - недопустимая операция." << endl;
                return 0;
            }
            break;
        case 4:
            if (operation4 == "+") {
                result = Y + x;
            }
            else if (operation4 == "*") {
                result = Y * x;
            }
            else if (operation4 == "-") {
                result = Y - x;
            }
            else if (operation4 == "/") {
                result = Y / x;
            }
            else {
                cout << "Ошибка - недопустимая операция." << endl;
                return 0;
            }
            break;
        default:
            cout << "Ошибка - недопустимый номер операции." << endl;
            return 0;
        }

        cout << "Результат: " << result << endl;
    }
    else if (vibor_y == "n" || vibor_y == "N") {
        cout << "Советую передумать.";
        return 0;
    }
    else {
        cout << "Ошибка! следуйте инструкции!";
        return 0;
    }
}