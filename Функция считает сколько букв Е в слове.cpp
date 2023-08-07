#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
    
    char str[70];
    cin.getline(str, 70);
    
    
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
        if(str[i] == 'e' || str[i] == 'E' && !Word)
        {
            Word = true;
            NumberAlpha++;
        }
    }
    
    cout << NumberAlpha;
    
    return 0;
