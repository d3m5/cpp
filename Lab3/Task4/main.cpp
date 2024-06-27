#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void customSort(vector<int> &arr, int N1, int N2)
{
    if (N1 < 0 || N2 >= arr.size() || N1 >= N2)
    {
        cout << "Неправильно задан интервал" << endl;
        return;
    }
    vector<int>::iterator start = arr.begin() + N1;
    vector<int>::iterator end = arr.begin() + N2 + 1;

    sort(start, end);
}

int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> arr = {2, 5, -83, -41, 6, 3, 10, 23, 324, 34, 34, 87, 3, -90, 4, 9};
    int N1 = 2;
    int N2 = 5;

    cout << "Исходный массив:" << endl;
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    customSort(arr, N1, N2);

    cout << "Отсортированный массив на интервале от " << N1 << " до " << N2 << ":" << endl;
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}