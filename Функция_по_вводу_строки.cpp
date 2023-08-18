#include <iostream>

void getSTRING(char *str);


int main()
{
  setlocale(LC_ALL, "Russian");
  int N = 50;
  char str[N];

  getSTRING(str);

  ctd::cout << str;
  
  return 0;
}


void getSTRING(char *str)
{
  int i(0);
  char simbol;
  std::cout << "Введите ряд символов: ";
  
  cin.get(simbol);
  while(simbol != '\n')
  {
    str[i] = simbol;
    i++;
    cin.get(simbol);
  }
  str[i] = '\0';

}
