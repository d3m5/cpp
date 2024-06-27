#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; ++j) {

        if (arr[j] <= pivot) {
            ++i; 
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    setlocale(LC_ALL, "ru");
    const int size = 16;
    int arr[size] = {2,5,-83,-41,6,3, 10, 23, 324,34, 34, 87,3,-90,4,9};

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, size - 1);
    cout << "Отсортированный массив:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}