/******************************************************************************

Строка на оборот

*******************************************************************************/
#include <iostream>   // - Консольный ввод/вывод
// #include <cctype>     // - Для isalpha()
#include <cstring>    // - Для strlen()
// #include <conio.h>    // - для функции _getch() которая ждёт ввода и не даёт закрыть кансоль для Win

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    const int n(80);
    char str1[n];
    char simbol;
    
    cout << "Введите строку: " << endl;
    cin.getline(str1, n);
    
    int i = strlen(str1) - 1;  // Отвечает за индекс последнего элемента массива
    int j = 0;   // Индекс первого элемента массива
    
    for(; i >= 0; i--, j++)
    {
        simbol = str1[i];
        str1[i] = str[j];
        str[j] = simbol;
        
    }
    str2[j] = '\n';
    
    cout << "строка в обратном порядке: " << str1;

    return 0;
}
