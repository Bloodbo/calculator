#include <iostream>
#include "Calculator.h"
using namespace std;


int main()
{
    setlocale(0, "");
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    cout << "это калькулятор!" << endl;
    cout << "Пожалуйста, введите операцию, которую необходимо выполнить. Формат ввода: a+b | a-b | a*b | a/b" << endl;

    calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Попытался разделить на ноль!" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Результат " << "из " << x << oper << y << " это: " << result << endl;
    
    }
}

