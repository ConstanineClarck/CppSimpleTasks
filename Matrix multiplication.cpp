/******************************************************************************

Умножение матриц произвольного размера с рандомными значениями в ячейках

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int RESULT = 0; // Временная переменная для сложения умноженых ячеек первой и второй матрицы перед передачей их в результирующую матрицу
    int H(0);       // Высота первой матрицы
    int L(0);       // Длинна второй матрицы
    cout << "Введите высоту и ширину для первой матрицы, через ENTER: ";
    cin >> H;
    cin >> L;
    cout << endl;
    int Q(0);
    int U(0);
    cout << "Спасибо, теперь введите те же самые показатели для второй матрицы: ";
    cin >> Q;       // Строки второй матрицы
    cin >> U;       // Столбцы второй матрицы
    
    int **matrix1 = new int *[H];
    int **matrix2 = new int *[Q];
    
    
    
    for(int i(0); i < H; i++)
    {
        for(int j(0); j < L; j++)
        {
            matrix1[i][j] = new int []
        }
    }
    
    for(int ii(0); ii < Q; ii++)
    {
        for(int jj(0); jj < U; jj++)
        {
            
        }
    }
    
    if(L != Q)
    {
        //cout << "Количество столбцов первой матрицы не совпадают с колличесвтом строк второой матрицыэрицы';    }
    
    for(int i(0); i < H; i++)
    {
        for(int j(0); j << L; j++)
        {
            for(int k(0); k < H; k++)
            {
                int result = matrix1[j][k] * matrix2[k][j];
                RESULT += resul;
                
            }
            
            matrixRESULTAT[i][j] = RESULT;
        }
        
        
    }

    return 0;
}
