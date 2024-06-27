#include <iostream>
#include<conio.h>
using namespace std;


int power(int x, int n);

int main() {
    setlocale(LC_ALL, "ru");
    int i, k;
    int base;

    cout << "Введите основание: ";
    cin >> base;
    
    for (i = 0; i < 10; i++) {
        k = power(base, i); 
        cout << "Степень = " << i << ", Итоговое число = " << k << endl;
    }

    return 0;
}

int power(int x, int n) {
    int p = 1;
    for (int i = 0; i < n; i++) {
        p *= x;
    }
    return p;
}