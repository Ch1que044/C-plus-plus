#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string vibor_y;
    cout << "������ ���������? [y] [n]: ";
    cin >> vibor_y;

    if (vibor_y == "y" || vibor_y == "Y") {

        int Y;
        cout << "������� �������� [y]: ";
        cin >> Y;

        if (Y <= 0) {
            cout << "������, ������� ������������� ��������";
            return 0;
        }
        else {
            cout << "�������, ���� ������" << endl;
        }

        int x;
        cout << "������� �������� [x]: ";
        cin >> x;

        if (x <= 0) {
            cout << "������, ������� ������������� ��������";
            return 0;
        }
        else {
            cout << "�������! ����������." << endl;
        }

        string operation1, operation2, operation3, operation4;

        cout << "������� ��������: ";
        cin >> operation1;
        if (operation1 != "*" &&
            operation1 != "+" &&
            operation1 != "/" &&
            operation1 != "-") {
            cout << "������ - ������������ ��������." << endl;
            return 0;
        }
        cin >> operation2;
        if (operation2 != "*" &&
            operation2 != "+" &&
            operation2 != "/" &&
            operation2 != "-") {
            cout << "������ - ������������ ��������." << endl;
            return 0;
        }
        cin >> operation3;
        if (operation3 != "*" &&
            operation3 != "+" &&
            operation3 != "/" &&
            operation3 != "-") {
            cout << "������ - ������������ ��������." << endl;
            return 0;
        }
        cin >> operation4;
        if (operation4 != "*" &&
            operation4 != "+" &&
            operation4 != "/" &&
            operation4 != "-") {
            cout << "������ - ������������ ��������." << endl;
            return 0;
        }
        int reshenie;

        cout << "������� ����� �������� ��� �������: ";
        cin >> reshenie;

        int result; // ���������� ��� �������� ���������� ����������

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
                cout << "������ - ������������ ��������." << endl;
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
                cout << "������ - ������������ ��������." << endl;
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
                cout << "������ - ������������ ��������." << endl;
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
                cout << "������ - ������������ ��������." << endl;
                return 0;
            }
            break;
        default:
            cout << "������ - ������������ ����� ��������." << endl;
            return 0;
        }

        cout << "���������: " << result << endl;
    }
    else if (vibor_y == "n" || vibor_y == "N") {
        cout << "������� ����������.";
        return 0;
    }
    else {
        cout << "������! �������� ����������!";
        return 0;
    }
}