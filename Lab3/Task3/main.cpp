#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void customSort(vector<int> &arr)
{
    vector<int> even;
    vector<int> odd;
    for (int num : arr)
    {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    int i = 0;
    for (int num : even)
    {
        arr[i++] = num;
    }
    for (int num : odd)
    {
        arr[i++] = num;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    vector<int> arr = {2, 5, -83, -41, 6, 3, 10, 23, 324, 34, 34, 87, 3, -90, 4, 9};

    cout << "Исходный массив:" << endl;
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    customSort(arr);

    cout << "Отсортированный массив:" << endl;
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}