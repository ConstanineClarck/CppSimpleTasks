
#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
    const int n(100);
    char str1[n] = "HelloWorld";
    
    int it(0);
    int flag = strlen(str1);
    
    int str2[flag];
    
    
    
    char simbol;
    for(int i(0); i < flag; i++)
    {
        simbol = str1[i];
        for(int j(0); j < flag; j++)
        {
            if(simbol == str1[j])
            {
                it++;
            }
        }
        str2[i] = it;
        it = 0;
    }
    
    for(int i(0); i < flag; i++)
    {
        cout << str1[i] <<  " - " << str2[i] << endl;
    }
    
    
    
    
    
    return 0;
}
