/******************************************************************************

Умножение матриц произвольного размера с рандомными значениями в ячейках

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void MATRIX_LOAD(int **MATRIX, H, L);   // Функция для заполнения певрой и второй матрицы
void MATRIX_RESULT_LOAD(int **MATRI, H, U);   // Функция для заполнения результироующей матрицы нулями

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
    int **matrixRESULTAT = new int *[H];
    
    MATRIX_LOAD(int **matrix), H, L);
    MATRIX_LOAD(int **matrix2), Q, U);
    MATRIX_RESULT_LOAD(int **matrixRESULTAT, H, U);


  
                    
    while(L != Q)   // Проверка на то, можно ли умножать матрицы
    {
        cout << "Количество столбцов первой матрицы не совпадают с колличесвтом строк второой матрицыэрицы";
        system("cls");
        
    }
    
    
    
    for(int i(0); i < H; i++)
    {
        for(int j(0); j << U; j++)
        {
            for(int k(0); k < H; k++)
            {
                int result = matrix1[i][k] * matrix2[k][j];
                RESULT += result;
                
            }
            
            matrixRESULTAT[i][j] = RESULT;
        }
        
        
    }
    
    for(int i(0); i < H; i++)
    {
        for(int j(0); j < U; j++)
        {
            cout << matrixRESULTAT[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i(0); i < L; i++)
    {
        delete [] matrix1[i];
        delete [] matrix2[i];
        delete [] matrixRESULTAT[i];
    }
    
    delete [] matrix1;
    delete [] matrix2;
    delete [] matrixRESULTAT;

    return 0;
}       

void MATRIX_LOAD(int **MATRIX, H, L)
{
    srand(time(NULL));
    for(int i(0); i < H; i++)
    {
         matrix1[i] = new int [L];
    }
    for(int i(0); i < H; i++)
    {
        for(int j(0); j < L; j++)
        {
            int Meaning_of_matrices1 = rand();
            matrix1[i][j] = Meaning_of_matrices1;
        }
    }
    
}



void MATRIX_RESULT_LOAD(int **MATRI, H, U)
{
      
    for(int i(0); i < H; i++)
    {
        matrixRESULT[i] = new int [U];
    }
    for(int i(0); i < H; i++)
        {
            for(int j(0); j < U; j++)
                {
                    matrixRESULTAT[i][j] = 0;
                }
        }
}

