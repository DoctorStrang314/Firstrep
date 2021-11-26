#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");
    int num1, num2;
    char oper;
    cout << "Введите первое число ";
    cin >> num1;
    cout << "Введите второе число ";
    cin >> num2;
    cout << "Введите действие ";
    cin >> oper;
   
   
    cout << num1 << oper << num2<<"=";
    if (oper == '+') {
        cout << num1 + num2;
    }
    else if (oper == '-') {
        cout << num1 - num2;
    }
    else if (oper == '*') {
        cout << num1 * num2;
    }
    else if (oper == '/' && num2 != 0) {
        cout << num1 / num2;
    }
    else if (oper == '%') {
        cout << num1 % num2;
    }
    else {
        cout << "\nЧто-то пошло не так";
    }
    return 0;
}

