/******************************************************************************

КАЛЬКУЛЯТОР

*******************************************************************************/
#include <iostream>
#include <conio.h>

using namespace std;


void input(char &S, double &x1, double &x2);
void REsULT (char &S, double &x1, double &x2);


int main()
{
    setlocale(LC_ALL, "Russian");
    
    char S;
    double x1;
    double x2;
    while(S != 'q')
    {
        


        input(S, x1, x2);
        REsULT(S, x1, x2);
    }
    

    return 0;
}


void input(char &S, double &x1, double &x2)
{
    cout << "Калькулятор преветствует вас .. Чего вы ждёте, вводите свои числа и операцию;" << endl;
    cin >> x1;
    cout << " ";
    cin >> S;
    cout << " ";
    cin >> x2;
    cout << endl;
}





void REsULT (char &S, double &x1, double &x2)
{
    
    if(S == '+')
    {
        cout << x1 + x2 << endl;
    }
    else if(S == '*')
    {
        cout << x1 * x2 << endl;
    }
    else if(S == '-')
    {
        cout << x1 - x2 << endl;
    }
    else if(S == '/')
    {
        cout << x1 / x2 << endl;
    }
    else
    {
        cout << " попробуйте ещё раз" << endl;
    }
}
