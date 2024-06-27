#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define N 5

using namespace std;

float findMin(float matrix[N][N])
{
    float min = matrix[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    return min;
}
float findMax(float matrix[N][N])
{
    float max = matrix[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

float findMaxLowerTriangle(float matrix[N][N])
{
    float max = matrix[N - 1][0];
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j >= N - i - 1; j--)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

float findMaxUpperTriangle(float matrix[N][N])
{
    float max = matrix[0][1];
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

float findMinLowerTriangle(float matrix[N][N])
{
    float min = matrix[N - 1][0];
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j >= N - i - 1; j--)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

float findMinUpperTriangle(float matrix[N][N])
{
    float min = matrix[0][1];
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

float findMinMainDiagonal(float matrix[N][N])
{
    float min = matrix[0][0];
    for (int i = 1; i < N; i++)
    {
        if (matrix[i][i] < min)
        {
            min = matrix[i][i];
        }
    }
    return min;
}

float findMaxMainDiagonal(float matrix[N][N])
{
    float max = matrix[0][0];
    for (int i = 1; i < N; i++)
    {
        if (matrix[i][i] > max)
        {
            max = matrix[i][i];
        }
    }
    return max;
}

float findMinSecondaryDiagonal(float matrix[N][N])
{
    float min = matrix[0][N - 1];
    for (int i = 1; i < N; i++)
    {
        if (matrix[i][N - 1 - i] < min)
        {
            min = matrix[i][N - 1 - i];
        }
    }
    return min;
}

float findMaxSecondaryDiagonal(float matrix[N][N])
{
    float max = matrix[0][N - 1];
    for (int i = 1; i < N; i++)
    {
        if (matrix[i][N - 1 - i] > max)
        {
            max = matrix[i][N - 1 - i];
        }
    }
    return max;
}

float findAverage(float matrix[N][N])
{
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum / (N * N);
}

float findAverageLowerTriangle(float matrix[N][N])
{
    float sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += matrix[i][j];
            count++;
        }
    }
    return sum / count;
}

float findAverageUpperTriangle(float matrix[N][N])
{
    float sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            sum += matrix[i][j];
            count++;
        }
    }
    return sum / count;
}

void findRowSums(float matrix[N][N], float rowSums[N])
{
    for (int i = 0; i < N; i++)
    {
        rowSums[i] = 0;
        for (int j = 0; j < N; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }
}

void findColumnSums(float matrix[N][N], float columnSums[N])
{
    for (int j = 0; j < N; j++)
    {
        columnSums[j] = 0;
        for (int i = 0; i < N; i++)
        {
            columnSums[j] += matrix[i][j];
        }
    }
}

void findRowMin(float matrix[N][N], float rowMin[N])
{
    for (int i = 0; i < N; i++)
    {
        rowMin[i] = matrix[i][0];
        for (int j = 1; j < N; j++)
        {
            if (matrix[i][j] < rowMin[i])
            {
                rowMin[i] = matrix[i][j];
            }
        }
    }
}

void findColumnMin(float matrix[N][N], float columnMin[N])
{
    for (int j = 0; j < N; j++)
    {
        columnMin[j] = matrix[0][j];
        for (int i = 1; i < N; i++)
        {
            if (matrix[i][j] < columnMin[j])
            {
                columnMin[j] = matrix[i][j];
            }
        }
    }
}

void findRowMax(float matrix[N][N], float rowMax[N])
{
    for (int i = 0; i < N; i++)
    {
        rowMax[i] = matrix[i][0];
        for (int j = 1; j < N; j++)
        {
            if (matrix[i][j] > rowMax[i])
            {
                rowMax[i] = matrix[i][j];
            }
        }
    }
}

void findColumnMax(float matrix[N][N], float columnMax[N])
{
    for (int j = 0; j < N; j++)
    {
        columnMax[j] = matrix[0][j];
        for (int i = 1; i < N; i++)
        {
            if (matrix[i][j] > columnMax[j])
            {
                columnMax[j] = matrix[i][j];
            }
        }
    }
}

void findTriangleSums(float matrix[N][N], float &lowerTriangleSum, float &upperTriangleSum)
{
    lowerTriangleSum = 0;
    upperTriangleSum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j)
            {
                lowerTriangleSum += matrix[i][j];
            }
            if (i <= j)
            {
                upperTriangleSum += matrix[i][j];
            }
        }
    }
}

float findClosestToAverage(float matrix[N][N])
{

    float avg = findAverage(matrix);
    float closest = matrix[0][0];
    float minDiff = abs(matrix[0][0] - avg);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            float diff = abs(matrix[i][j] - avg);
            if (diff < minDiff)
            {
                closest = matrix[i][j];
                minDiff = diff;
            }
        }
    }
    return closest;
}

int main()
{
    setlocale(LC_ALL, "ru");

    float m[N][N];

    float rowSums[N], columnSums[N];
    float rowMin[N], columnMin[N];
    float rowMax[N], columnMax[N];
    float lowerTriangleSum, upperTriangleSum;
    float findMin(float matrix[N][N]);
    float findMax(float matrix[N][N]);
    float findMaxLowerTriangle(float matrix[N][N]);
    float findMaxUpperTriangle(float matrix[N][N]);
    float findMinLowerTriangle(float matrix[N][N]);
    float findMinUpperTriangle(float matrix[N][N]);
    float findMinMainDiagonal(float matrix[N][N]);
    float findMaxMainDiagonal(float matrix[N][N]);
    float findMinSecondaryDiagonal(float matrix[N][N]);
    float findMaxSecondaryDiagonal(float matrix[N][N]);
    float findAverage(float matrix[N][N]);
    float findAverageLowerTriangle(float matrix[N][N]);
    float findAverageUpperTriangle(float matrix[N][N]);

    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            m[i][j] = rand() / 10.f;
        }
    }

    cout << "Сгенерирвоанная матрциа: ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(8) << setprecision(5) << m[i][j];
        }
        cout << endl;
    }

    cout << "Минимум матрицы: " << findMin(m) << endl;
    cout << "Максимум матрицы: " << findMax(m) << endl;

    cout << "Максимум нижнетреугольной части матрицы: " << findMaxLowerTriangle(m) << endl;
    cout << "Минимум нижнетреугольной части матрицы: " << findMinLowerTriangle(m) << endl;

    cout << "Максимум верхнетреугольной части матрицы: " << findMaxUpperTriangle(m) << endl;
    cout << "Минимум верхнетреугольной части матрицы: " << findMinUpperTriangle(m) << endl;

    cout << "Минимум главной диагонали матрицы: " << findMinMainDiagonal(m) << endl;
    cout << "Максимум главной диагонали матрицы: " << findMaxMainDiagonal(m) << endl;

    cout << "Минимум второстепенной диагонали матрицы: " << findMinSecondaryDiagonal(m) << endl;

    cout << "Максимум второстепенной диагонали матрицы: " << findMaxSecondaryDiagonal(m) << endl;

    cout << "Среднеарифметическое значение элементов матрицы: " << findAverage(m) << endl;
    cout << "Среднеарифметическое значение элементов нижнетреугольной части матрицы: " << findAverageLowerTriangle(m) << endl;
    cout << "Среднеарифметическое значение элементов верхнетреугольной части матрицы: " << findAverageUpperTriangle(m) << endl;

    findRowSums(m, rowSums);
    findColumnSums(m, columnSums);
    cout << "Суммы строк матрицы: ";
    for (int i = 0; i < N; i++)
    {
        cout << rowSums[i] << " ";
    }
    cout << endl;
    cout << "Суммы столбцов матрицы: ";
    for (int j = 0; j < N; j++)
    {
        cout << columnSums[j] << " ";
    }
    cout << endl;

    findRowMin(m, rowMin);
    findColumnMin(m, columnMin);
    findRowMax(m, rowMax);
    findColumnMax(m, columnMax);

    cout << "Минимальные значения строк: ";
    for (int i = 0; i < N; i++)
    {
        cout << rowMin[i] << " ";
    }
    cout << endl;
    cout << "Минимальные значения столбцов: ";
    for (int j = 0; j < N; j++)
    {
        cout << columnMin[j] << " ";
    }
    cout << endl;
    cout << "Максимальные значения строк: ";
    for (int i = 0; i < N; i++)
    {
        cout << rowMax[i] << " ";
    }
    cout << endl;
    cout << "Максимальные значения столбцов: ";
    for (int j = 0; j < N; j++)
    {
        cout << columnMax[j] << " ";
    }
    cout << endl;

    findTriangleSums(m, lowerTriangleSum, upperTriangleSum);
    cout << "Сумма нижнетреугольной части матрицы: " << lowerTriangleSum << endl;
    cout << "Сумма верхнетреугольной части матрицы: " << upperTriangleSum << endl;

    float closestToAverage = findClosestToAverage(m);
    cout << "Элемент, наиболее близкий по значению к среднеарифметическому: " << closestToAverage << endl;

    getch(); 
    return 0;
}
