#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
    
    char str[70];
    cout << "Введите предложение.. ";
    cin.getline(str, 70);
    cout << endl;
    
    cout << "Введите символ слова с которым хотите подсчитать.. ";
    char simbol = getchar();
    
    bool inWord = false;
    bool Word = false;
    
    int NumberAlpha(0);
    
    
    for(int i(0); str[i] != '\0'; i++)
    {
        if(!(inWord) && isalpha(str[i]))
        {
            inWord = true;
            Word = false;
        }
        if(!(isalpha(str[i])))
        {
            inWord = false;
        }
        if((str[i] == simbol) && !Word)
        {
            Word = true;
            NumberAlpha++;
        }
    }
    
    cout << NumberAlpha;
    
    return 0;
}
