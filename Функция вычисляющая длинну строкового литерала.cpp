/* Функция вычисляющая длинну строкового литерала - аналог strlen() */


#include <iostream>
//#include <cstring>


using namespace std;

int strlength(string str);

int main()
{
    int n(100);
    int it;
    char str[100] = {'H', 'E', 'L', 'O', '\n'};
    
    it = strlength(str);
    
    cout << it;
    

    return 0;
}


int strlength(string str)
{
    int i(0);
    int it(0);
    while(str[i] != '\n')
    {
        i++;
        it++;
    }
    
    return it;
}
